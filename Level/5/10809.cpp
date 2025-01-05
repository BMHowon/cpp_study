#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {

    vector<int> v(26, -1);

    string s;
    cin >> s;

    for(int i = 0; i < s.size(); i++) {
        char ch = s[i];
        int index = ch - 'a';
        if(v[index] == -1) {
            v[index] = i;
        }
    }
    
    for(int i = 0; i < 26; i++) {
        cout << v[i] << " ";
    }

    return 0;
}