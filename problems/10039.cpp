#include <iostream>

using namespace std;

int main() {

    int score, sum = 0;

    for(int i = 0; i < 5; i++) {
        cin >> score;
        sum += max(score, 40);
    }

    cout << sum / 5;

    return 0;
}