#include <iostream>

using namespace std;

int main() {

    int A, B, C;
    cin >> A >> B >> C;

    string result = to_string(A) + to_string(B);

    int num = stoi(result);

    cout << (A + B) - C << "\n";
    cout << num - C;

    return 0;
}