#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

    vector<int> baskets;

    int N, M;
    cin >> N >> M;

    for(int i = 1; i <= N; i++) {
        baskets.push_back(i);
    }

    for(int k = 0; k < M; k++) {
        int i, j;
        cin >> i >> j;

        reverse(baskets.begin() + (i - 1), baskets.begin() + j);
    }

    for(int i = 0; i < baskets.size(); i++) {
        cout << baskets[i] << " ";
    }

    return 0;
}