#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

    vector<int> v;

    for(int i = 0; i < 2; i++) {
        int j, m, s, e;
        int total = 0;
        cin >> j >> m >> s >> e;
        total += j;
        total += m;
        total += s;
        total += e;
        
        v.push_back(total);
    }

    sort(v.begin(), v.end(), greater<int>());

    if(v[0] == v[1]) {
        cout << v[0];
    } else {
        cout << v[0];
    }

    return 0;
}