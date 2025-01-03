#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> v;

int main() {

    for(int i = 0; i < 5; i++) {
        int a, b, c, d;
        cin >> a >> b >> c >> d;

        v.push_back(a + b + c + d);
    }

    auto max = max_element(v.begin(), v.end());
    int max_score = *max;
    int max_index = distance(v.begin(), max) + 1;

    cout << max_index << " " << max_score;

    return 0;
}