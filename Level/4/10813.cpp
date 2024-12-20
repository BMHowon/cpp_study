#include <iostream>
#include <vector>

using namespace std;

int main() {

    int N, M;
    cin >> N >> M;

    vector<int> baskets;

    for(int i = 1; i < N+1; i++) {
        baskets.push_back(i);
    }

    for(int j = 0; j < M; j++) {
        int i, k;
        cin >> i >> k;

        int temp = baskets[i-1];
        baskets[i-1] = baskets[k-1];
        baskets[k-1] = temp;
    }

    for(int i = 0; i < baskets.size(); i++) {
        cout << baskets[i] << " ";
    }

    return 0;
}