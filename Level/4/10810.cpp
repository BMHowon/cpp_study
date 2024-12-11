#include <iostream>
#include <vector>

using namespace std;

int main() {

    int N, M;
    cin >> N >> M;

    vector<int> baskets(N, 0);

    for(int i = 0; i < M; i++) {
        int a, b, c;
        cin >> a >> b >> c;

        for(int j = a - 1; j <= b - 1; j++) {
            baskets[j] = c;
        }
    }

        for(int k = 0; k < baskets.size(); k++) {
            cout << baskets[k] << " ";
        }

    return 0;
}