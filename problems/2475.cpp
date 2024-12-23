#include <iostream>

using namespace std;

int main() {

    int A, B, C, D, E, result;
    cin >> A >> B >> C >> D >> E;

    result = ((A * A) + (B * B) + (C * C) + (D * D) + (E * E)) % 10;

    cout << result;

    return 0;
}