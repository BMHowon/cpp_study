#include <iostream>
using namespace std;

int main() {

    int a,b;
    cin >> a >> b;

    int o = b % 10;
    int t = (b / 10) % 10;
    int h = b / 100;

    cout << a * o << '\n';
    cout << a * t << '\n';
    cout << a * h << '\n';
    cout << a*b;

    return 0;
}