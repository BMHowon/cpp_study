#include <iostream>
#include <vector>

using namespace std;

int main() {

    vector<int> v(8);

    for(int i = 0; i < 8; i++) {
        cin >> v[i];
    }

    bool isA = true;
    bool isD = true;

    for(int i = 0; i < 7; i++) {
        if(v[i] < v[i + 1]) {
            isD = false;
        } else if(v[i] > v[i + 1]) {
            isA = false;
        }
    }

    if(isD) {
        cout << "descending";
    } else if(isA) {
        cout << "ascending";
    } else {
        cout << "mixed";
    }

    return 0;
}
