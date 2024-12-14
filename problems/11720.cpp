#include <iostream>
#include <string>

using namespace std;

int main() {

    int N;
    cin >> N;

    string number;
    int sum = 0;

    cin >> number;

    for(int i = 0; i < N; i++) {
        sum += number[i] - '0';
    }

    cout << sum;

    return 0;
}