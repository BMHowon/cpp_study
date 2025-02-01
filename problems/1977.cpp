#include <iostream>
#include <vector>
#include <numeric>

using namespace std;

int main() {

    int m, n;
    cin >> m >> n;

    vector<int> perfect;

    for(int i = 1; i * i <= n; i++) {
        if(i * i >= m) {
            perfect.push_back(i * i);
        }
    }

    int sum = accumulate(perfect.begin(), perfect.end(), 0);

    if(!perfect.empty()) {
        cout << sum << "\n" << perfect[0];
    } else {
        cout << "-1";
    }

    return 0;
}