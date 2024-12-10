#include <iostream>

using namespace std;

long long fibo(int N) {
    if(N <= 1) {
        return N;
    }

    long long prev = 0, curr = 1;
    for(int i = 2; i <= N; i++) {
        long long next = prev + curr;
        prev = curr;
        curr = next;
    }
    return curr;
}

int main() {

    int N;
    cin >> N;

    cout << fibo(N);

    return 0;
}