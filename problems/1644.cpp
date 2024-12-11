#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

vector<int> sieve(int n) {
    vector<bool> isPrime(n + 1, true);
    vector<int> primes;
    isPrime[0] = isPrime[1] = false;

    for(int i = 2; i <= n; i++) {
        if(isPrime[i]) {
            primes.push_back(i);
            for(int j = i * 2; j <= n; j += i) {
                isPrime[j] = false;
            }
        }
    }
    return primes;
}

int main() {

    int N;
    cin >> N;

    vector<int> primes = sieve(N);

    int start = 0, end = 0, sum = 0, count = 0;
    while(end <= (int)primes.size()) {
        if(sum >= N) {
            if(sum == N) {
                count++;
            }
            sum -= primes[start++];
        } else {
            if(end < (int)primes.size()) {
                sum += primes[end];
            }
            end++;
        }
    }

    cout << count;

    return 0;
}