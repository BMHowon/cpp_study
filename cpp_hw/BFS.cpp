#include <iostream>
#include <vector>
#include <queue>
#include <tuple>
#include <algorithm>
#include <unordered_map>
#include <bitset>

using namespace std;

const int INF = 1e9;

int main() {
    int N, M, K;
    cin >> N >> M >> K; // 도시 개수, 도로 개수, 반드시 방문해야 할 도시 개수

    vector<vector<int>> graph(N + 1); // 도시 간 연결 정보

    // 도로 정보 입력
    for (int i = 0; i < M; i++) {
        int u, v;
        cin >> u >> v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }

    vector<int> mustVisit(K); // 반드시 방문해야 할 도시
    for (int i = 0; i < K; i++) {
        cin >> mustVisit[i];
    }

    // 도시 번호를 비트마스크의 인덱스로 매핑
    unordered_map<int, int> cityToBit;
    for (int i = 0; i < K; i++) {
        cityToBit[mustVisit[i]] = i;
    }

    // BFS를 위한 큐
    queue<tuple<int, int, int>> q; // 현재 도시, 방문 상태, 이동 거리
    vector<vector<int>> dist(N + 1, vector<int>(1 << K, INF)); // 최단 거리 저장

    // 초기 상태 (모든 도시에서 탐색 시작 가능)
    for (int i = 1; i <= N; i++) {
        int bitState = (cityToBit.count(i) ? (1 << cityToBit[i]) : 0);
        q.push({i, bitState, 0});
        dist[i][bitState] = 0;
    }

    int minDistance = INF;

    // BFS 탐색 시작
    while (!q.empty()) {
        auto [curCity, bitState, curDist] = q.front();
        q.pop();

        // 모든 도시를 방문했는지 확인
        if (bitState == (1 << K) - 1) {
            minDistance = min(minDistance, curDist);
            continue;
        }

        // 인접 도시 탐색
        for (int nextCity : graph[curCity]) {
            int nextBitState = bitState;
            if (cityToBit.count(nextCity)) {
                nextBitState |= (1 << cityToBit[nextCity]);
            }

            // 새로운 상태에서 더 짧은 경로라면 갱신 및 큐에 추가
            if (curDist + 1 < dist[nextCity][nextBitState]) {
                dist[nextCity][nextBitState] = curDist + 1;
                q.push({nextCity, nextBitState, curDist + 1});
            }
        }
    }

    cout << (minDistance == INF ? -1 : minDistance) << endl;

    return 0;
}

// 도시들을 그래프로 보고 최단거리를 구하는데는 BFS가 적합하여 BFS알고리즘을 사용하여 구현함
// 도시마다 방문 상태를 표현하기 위해서 비트마스크를 이용함
// BFS에서 O(V + E), 비트마스크에서 O(2^k N)이라서 최종적으로 O(2^k(V+E)만큼의 시간복잡도가 소요됨