#include <iostream>

using namespace std;

int main() {
    int a, b, c, scal;
    cin >> a >> b >> c;

    scal = a + b + c;

    if (scal == 180) {
        if (a == b && b == c) {
            cout << "Equilateral";
        } else if (a == b || b == c || c == a) {
            cout << "Isosceles";
        } else {
            cout << "Scalene";
        }
    } else {
        cout << "Error";
    }

    return 0;
}
