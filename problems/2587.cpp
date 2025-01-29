#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

    int r = 0;

    vector<int> v;

    for(int i = 0; i < 5; i++) {
        int n;
        cin >> n;
        v.push_back(n);
        r += n;
    }

    sort(v.begin(), v.end());

    cout << r / 5 << "\n" << v[2];

    return 0;
}