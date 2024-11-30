#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

const int INF = 1e9; // INF 값을 큰 값으로 설정

int main() {
    int N, M;
    cin >> N >> M; // 도시 개수와 도로 개수 입력

    // 인접 행렬 초기화
    vector<vector<int>> dist(N + 1, vector<int>(N + 1, INF));

    // 자기 자신으로 가는 거리는 0으로 설정
    for (int i = 1; i <= N; i++) {
        dist[i][i] = 0;
    }

    // 도로 정보 입력
    for (int i = 0; i < M; i++) {
        int A, B, C;
        cin >> A >> B >> C;
        dist[A][B] = min(dist[A][B], C); // 중복된 도로의 최소 거리만 저장
    }

    // 플로이드-워셜 알고리즘 구현
    for (int k = 1; k <= N; k++) { // 중간 노드
        for (int i = 1; i <= N; i++) { // 시작 노드
            for (int j = 1; j <= N; j++) { // 끝 노드
                if (dist[i][k] != INF && dist[k][j] != INF) {
                    dist[i][j] = min(dist[i][j], dist[i][k] + dist[k][j]);
                }
            }
        }
    }

    // 결과 출력
    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= N; j++) {
            if (dist[i][j] == INF) {
                cout << "INF "; // 갈 수 없는 경우 INF 출력
            } else {
                cout << dist[i][j] << " "; // 최단 거리 출력
            }
        }
        cout << endl;
    }

    return 0;
}

// 플로이드 워셜을 이용해 각 도시간 최단 거리를 구하는 식으로 구현함
// 플로이드 워셜을 구현할 때 for문을 3개 사용했기 때문에 O(N^3)만큼 시간복잡도가 소요됨