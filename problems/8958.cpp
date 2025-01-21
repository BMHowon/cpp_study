#include <iostream>
#include <string>

using namespace std;

int main() {

    int n;
    cin >> n;
    cin.ignore();

    for(int i = 0; i < n; i++) {
        string result;
        getline(cin, result);

        int score = 0;
        int straight = 0;

        for(char ch : result) {
            if(ch == 'O') {
                straight++;
                score += straight;
            } else {
                straight = 0;
            }
        }
        cout << score << "\n";
    }

    return 0;
}