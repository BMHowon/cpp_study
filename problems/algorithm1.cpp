#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

const int INF = 1e9;

int main() {
    int n, m;
    cin >> n >> m; // 비교할 횟수와 학생수 입력받기

    vector<vector<int>> graph(n+1, vector<int>(n+1, INF));

    for(int i = 1; i <= n; ++i) {
        graph[i][i] = 0;
    }

    for(int i = 0; i < m; ++i) {
        int a, b;
        cin >> a >> b;
        graph[a][b] = 1;
    }

    for(int k = 1; k <= n; ++k) {
        for(int i = 1; i <= n; ++i) {
            for(int j = 1; j <= n; ++j) {
                if(graph[i][k] != INF && graph[k][j] != INF) {
                    graph[i][j] = min(graph[i][j], graph[i][k] + graph[k][j]);
                }
            }
        }
    }

    int result = 0;
    for(int i = 1; i <= n; ++i) {
        int count = 0;
        for(int j = 1; j <= n; ++j) {
            if(graph[i][j] != INF || graph[j][i] != INF) {
                count++;
            } 
        }
        if(count == n) {
            result++;
        }
    }

    cout << result << endl;
    return 0;
}

