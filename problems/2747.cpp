#include <iostream>

using namespace std;

int main() {

    int N;
    cin >> N;

    int a = 0;
    int b = 1;

    int result = 0;

    if(N == 0) {
        result = a;
    } else if (N == 1) {
        result = b;
    } else
    for(int i = 2; i <= N; i++) {
        result = a + b;
        a = b;
        b = result;
    }

    cout << result;

    return 0;
}