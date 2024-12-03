#include <iostream>
#include <vector>
using namespace std;

int main() {

    int N, number;
    cin >> N >> number;

    vector<int> V;
    vector<int> result;
    
    for(int i = 0; i < N; i++) {
        int num;
        cin >> num;
        V.push_back(num);
    }

    for(int i = 0; i < N; i++) {
        if(V[i] < number) {
            result.push_back(V[i]);
        }
    }

    for(int value : result) {
        cout << value << " ";
    }

    return 0;
}