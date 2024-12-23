#include <iostream>
#include <vector>
#include <set>

using namespace std;

int main() {

    set<int> v;
    int num;

    for(int i = 0; i < 10; i++) {
        cin >> num;
        v.insert(num % 42);
    }

    cout << v.size();

    return 0;
}