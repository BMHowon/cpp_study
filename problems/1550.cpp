#include <iostream>
#include <string>

using namespace std;

int main() {

    string N;
    cin >> N;

    int ten = stoi(N, nullptr, 16);

    cout << ten;

    return 0;
}