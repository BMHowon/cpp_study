#include <iostream>
using namespace std;

int main() {

    int totalprice, N;
    cin >> totalprice >> N;

    for(int i = 0; i < N; i++) {
        int A, B;
        cin >> A >> B;
        totalprice = totalprice - (A*B);
    }

    if(totalprice == 0) {
        cout << "Yes";
    } else {
        cout << "No";
    }

    return 0;
}