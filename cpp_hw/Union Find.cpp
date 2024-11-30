#include <iostream> 
#include <vector>   
#include <algorithm> 

using namespace std;

// 간선 정보를 저장하는 구조체
struct Edge {
    int u, v, cost; 
    // 간선을 비용 기준으로 정렬하기 위한 연산자
    bool operator<(const Edge &other) const {
        return cost < other.cost; // 비용이 작은 순서로 정렬
    }
};

// 도시를 그룹으로 관리하기 위한 부모 배열
vector<int> parent;

// 특정 도시가 속한 그룹의 루트를 찾는 함수 
int find(int x) {
    // 자기 자신이 부모면 자신이 루트
    if (parent[x] == x) return x;
    // 아니면 재귀적으로 부모를 찾아가며 루트를 찾음 
    return parent[x] = find(parent[x]);
}

// 두 도시를 같은 그룹으로 묶는 함수
void unite(int a, int b) {
    // 각 도시의 루트를 찾음
    a = find(a);
    b = find(b);
    // 루트가 다르면 하나로 묶음
    if (a != b) parent[b] = a;
}

int main() {
    int N, M, K; 
    cin >> N >> M >> K; 

    vector<Edge> edges; // 모든 간선을 저장할 벡터

    // M개의 간선 정보 입력
    for (int i = 0; i < M; i++) {
        int u, v, c; 
        cin >> u >> v >> c; 
        edges.push_back({u, v, c}); 
    }

    // K개의 제약 조건 입력
    for (int i = 0; i < K; i++) {
        int a, b, c;
        cin >> a >> b >> c; 
    }

    // 간선을 비용 기준으로 정렬
    sort(edges.begin(), edges.end());

    // 각 도시를 자기 자신이 부모로 설정
    parent.resize(N + 1);
    for (int i = 1; i <= N; i++) {
        parent[i] = i; // 초기에는 각 도시가 자기 자신만을 포함
    }

    int totalCost = 0; // 최종 최소 비용을 저장할 변수
    int edgeCount = 0; // 선택된 간선의 개수

    // 정렬된 간선을 하나씩 확인
    for (const auto &edge : edges) {
        // 간선의 양 끝 도시가 서로 다른 그룹에 속하면 연결
        if (find(edge.u) != find(edge.v)) {
            unite(edge.u, edge.v); // 두 도시를 같은 그룹으로 묶음
            totalCost += edge.cost; // 비용을 추가
            edgeCount++; // 선택된 간선 개수 증가
            if (edgeCount == N - 1) break;
        }
    }

    // 간선 개수가 N-1이 아니면 모든 도시를 연결할 수 없음
    if (edgeCount != N - 1) {
        cout << -1 << endl; // 연결 불가능
    } else {
        cout << totalCost << endl; // 최소 비용 출력
    }

    return 0; 
}

// 유니온 파인드를 사용하여 고속도로를 연결해주고, 크루스칼 알고리즘을 사용하여 최소 스패닝 트리를 구해 최소비용을 구함
// 고속도로를 비용을 기준으로 정렬하는데 O(MlogM)만큼 걸리기 때문에 시간복잡도 O(MlogM) 소요됨