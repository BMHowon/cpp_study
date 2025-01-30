#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

    int n;
    cin >> n;

    vector<int> time(n);
    
    for(int i = 0; i < n; i++) {
        cin >> time[i];
    }

    sort(time.begin(), time.end());

    int total = 0;
    int result = 0;

    for(int i = 0; i < n; i++) {
        total += time[i];
        result += total;
    }

    cout << result;

    return 0;
}