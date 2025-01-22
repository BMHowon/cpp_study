#include <iostream>

using namespace std;

int main() {

    int result = 0;

    for(int i = 0; i < 5; i++) {
        int n;
        cin >> n;
        result += n;
    }
    cout << result;

    return 0;
}