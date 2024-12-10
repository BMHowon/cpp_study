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

    int A, B;
    cin >> A >> B;

    cout << gcd(A, B) << "\n" << lcm(A, B);

    return 0;
}