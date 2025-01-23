#include <iostream>

using namespace std;

int main() {

    int n;
    int result = 0;
    cin >> n;

    for(int i = 0; i < 5; i++) {
        int car;
        cin >> car;
        if(car == n) {
            result++;
        }
    }
    
    cout << result;

    return 0;
}