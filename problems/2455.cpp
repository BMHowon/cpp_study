#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {

    vector<int> v;
    int c = 0;

    for(int i = 0; i < 4; i++) {
        int a, b;
        cin >> a >> b;

        c -= a;
        c += b;

        v.push_back(c);
    }

    sort(v.begin(), v.end(), greater<int>());

    cout << v[0];

    return 0;
}