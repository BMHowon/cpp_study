#include <iostream>
#include <string>

using namespace std;

int main() {

    int n;
    cin >> n;

    for(int i = 0; i < n; i++) {
        int s;
        cin >> s;

        string bestschool;
        int best = 0;

        for(int j = 0; j < s; j++) {
            string school;
            int how;
            cin >> school >> how;
            
            if(how > best) {
                best = how;
                bestschool = school;
            }
        }
        cout << bestschool << "\n";
    }

    return 0;
}