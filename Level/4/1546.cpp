#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

    int N;
    cin >> N;

   vector<double> scores(N);

    for(int i = 0; i < N; i++) {
        cin >> scores[i];
    }

    double M = *max_element(scores.begin(), scores.end());

    double sum = 0;

    for(int i = 0; i < N; i++) {
        scores[i] = (scores[i] / M) * 100;
        sum += scores[i];
    }

    double result = sum / N;

    cout.precision(6);

    cout << result;

    return 0;
}