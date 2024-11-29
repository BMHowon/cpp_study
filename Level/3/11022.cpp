#include <iostream>
using namespace std;

int main() {

    int c;
    cin >> c;

    for (int i=1; i <= c; i++) {
        int A, B;
        cin >> A >> B;
        printf("Case #%d: %d + %d = %d\n",i, A, B, A+B);
    }

    return 0;
}