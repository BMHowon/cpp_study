#include <iostream>
#include <vector>

using namespace std;

int main() {

    vector<int> need = {1, 1, 2, 2, 2, 8};
    vector<int> got;

    for(int i = 0; i < 6; i++) {
        int p;
        cin >> p;
        got.push_back(p);
    }

    for(int i = 0; i < got.size(); i++) {
        if(need[i] == got[i]) {
            cout << '0' << " ";
        } else {
            cout << need[i] - got[i] << " ";
        } 
    }

    return 0;
}