#include <iostream>
using namespace std;

int main() {
    cin.tie(NULL);
    cout.tie(NULL);
    ios::sync_with_stdio(false);

    int N;
    cin >> N;

    for(int i = 0; i < N; i++) {
        int A, B;
        cin >> A >> B;
        cout << A+B << "\n";
    }


    return 0;
}