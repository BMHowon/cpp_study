#include <iostream>

using namespace std;

int gcd(int A, int B) {
    while(B != 0) {
        int temp = B;
        B = A % B;
        A = temp;
    }
    return A;
}

int lcm(int A, int B) {
    return (A * B) / gcd(A, B);
}

int main() {

    int n;
    cin >> n;

    for(int i = 0; i < n; i++) {
        int a, b;
        cin >> a >> b;
        cout << lcm(a, b) << "\n";
    }

    return 0;
}

