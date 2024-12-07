#include <iostream>

using namespace std;

int  main() {

    int arr[9];
    int max = -1;
    int idx = 0;

    for(int i = 0; i < 9; i++) {
        cin >> arr[i];
        if(arr[i] > max) {
            max = arr[i];
            idx = i + 1;
        }
    }

    cout << max << "\n" << idx;

    return 0;
}