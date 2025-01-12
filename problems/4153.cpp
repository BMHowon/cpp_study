#include <iostream>
#include <algorithm>

using namespace std;

int main() {

    int a, b, c;

    while(true) {
        cin >> a >> b >> c;

        
        if(a == 0 && b == 0 && c == 0) {
            break; 
        }

        int l[] = {a, b, c};
        sort(l, l + 3);

        if(l[0] * l[0] + l[1] * l[1] == l[2] * l[2]) {
            cout << "right" << "\n";
        }  else {
            cout << "wrong" << "\n";
        }
    }


    return 0;
}