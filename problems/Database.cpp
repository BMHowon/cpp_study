#include <iostream>
#include <vector>

using namespace std;

int main() {

    int N, M, K; 
    cin >> N >> M >> K;

    vector<int> customer;

    for(int i = 0; i < N; i++) { // customer배열에 고객 데이터 입력
        int cus;
        cin >> cus;
        customer.push_back(cus);
    }

    for(int j = 0; j < M+K; j++) { // 두가지 연산을 합한 횟수만큼 반복
        int a, b, c;
        cin >> a >> b >> c;

        int sum = 0; 

        if(a == 1) { // 1은 갱신
            customer[b-1] = c; // c값으로 갱신 고객은 1~5지만 배열은 0~4이니 -1씩 해줌
        } else if(a == 2) { //2 2는 b~c까지의 합
        /* 입력 예시에 2 2 5가 들어오면 2번부터 5번고객까지 합해야하니 
        2,3,4,5 총 4번 반복하는 반복문 */
            for(int k = b; k <= c; k++) { 
                        
                sum += customer[k-1];
                
            }
            cout << sum << "\n";
        }
    }

    return 0;
}