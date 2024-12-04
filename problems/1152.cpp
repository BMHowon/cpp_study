#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main() {

    string input;
    getline(cin, input);

    istringstream stream(input);
    string word;
    int wordCount = 0;

    while(stream >> word) {
        wordCount++;
    }

    cout << wordCount;

    return 0;
}