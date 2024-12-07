#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

    int N;
    cin >> N;

    vector<int> v(N);

    for(int i = 0; i < N; i++) {
        cin >> v[i];
    }

    int min = *min_element(v.begin(), v.end());
    int max = *max_element(v.begin(), v.end());

    cout << min << " " << max;

    return 0;
}