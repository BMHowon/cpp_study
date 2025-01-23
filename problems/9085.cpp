#include <iostream>

using namespace std;

int main() {

    int n;
    cin >> n;

    for(int i = 0; i < n; i++) {
        int c;
        int result = 0;
        cin >> c;
        
        for(int j = 0; j < c; j++) {
            int num;
            cin >> num;
            result += num;
        }
        cout << result << "\n";
    }

    return 0;
}