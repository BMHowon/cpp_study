#include <iostream>
#include <string>

using namespace std;

int main() {

    int n;
    cin >> n;

    for(int i = 0; i < n; i++) {
        int num;
        string s;
        cin >> num >> s;

        for(int j = 0; j < s.size(); j++) {
            for(int k = 0; k < num; k++) {
                cout << s[j];
            }
        }
        cout << "\n";
    }

    return 0;
}