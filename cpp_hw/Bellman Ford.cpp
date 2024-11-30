#include <iostream>
#include <vector>
#include <tuple>

using namespace std;

const int INF = 1e9; 

int main() {
    int V, E;
    cin >> V >> E; 

    vector<tuple<int, int, int>> edges; // 간선 정보를 저장할 벡터

    // 간선 정보 입력
    for (int i = 0; i < E; i++) {
        int u, v, w;
        cin >> u >> v >> w;
        edges.push_back({u, v, w}); // 간선 정보 저장 u에서 v로 가는 가중치 w
    }

    vector<int> dist(V + 1, INF); // 최단 거리 배열, 초기값은 INF
    dist[1] = 0; // 시작 정점의 거리는 0으로 설정

    // 벨만-포드 알고리즘 구현
    for (int i = 1; i <= V - 1; i++) { // V-1번 반복
        for (auto [u, v, w] : edges) {
            if (dist[u] != INF && dist[u] + w < dist[v]) {
                dist[v] = dist[u] + w; // 거리 갱신
            }
        }
    }

    // 음수 사이클 확인
    bool hasNegativeCycle = false;
    for (auto [u, v, w] : edges) {
        if (dist[u] != INF && dist[u] + w < dist[v]) {
            hasNegativeCycle = true; // 음수 사이클 발견
            break;
        }
    }

    if (hasNegativeCycle) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}

// 최단경로 뿐만 아니라 음수 사이클 여부를 확인해야 하기 때문에 벨만포드 알고리즘을 사용하여 구현함
// 시간복잡도는 벨만보트에 의해서 O(V*E)가 소요됨