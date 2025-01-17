#include <iostream>

using namespace std;

int main (){

    long long S;
    cin >> S;

    long long sum = 0;
    int n = 0;

    for(long long i = 1; sum + i <= S; i++) {
        sum += i;
        n++;
    }

    cout << n;

    return 0;
}