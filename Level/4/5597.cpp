#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

    vector<bool> students(31, false);

    for(int i = 0; i < 28; i++) {
        int student;
        cin >> student;
        students[student] = true;

        }

        for(int i = 1; i <= 30; i++) {
            if(!students[i]) {
                cout << i << "\n";
        }
    }

    return 0;
}