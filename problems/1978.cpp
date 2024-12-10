#include <iostream>

using namespace std;

bool isPrime(int num) {
    if(num <= 1) return false;
    for(int i = 2; i*i <= num; i++) {
        if(num % i == 0) return false;
    }
    return true;
}

int main() {

    int N;
    cin >> N;

    int result = 0;

    for(int i = 0; i < N; i++) {
        int num;
        cin >> num;

        if (isPrime(num)) {
            result++;
        }
    }

    cout << result;

    return 0;
}