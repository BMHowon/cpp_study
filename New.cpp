/* 절대값 구하기
cmath 라이브러라, abs(A) ()안에 연산 가능 */

/* 최대공약수, 최소공배수
int gcd(int A, int B) {
    while(B != 0) {
        int temp = B;
        B = A % B;
        A = temp;
    }
    return A;
}

int lcm(int A, int B) {
    return (A * B) / gcd(A, B);
}*/

/* 소수 구하기
bool isPrime(int N) {
    if(N <= 1) {
        return false;
    }
    for(int i = 2; i * i <= N; i++) {
        if(N % i == 0) {
            return false;
        }
    }
    return true;
}*/

/*소수점 N자리까지 출력하기
cout.precision(N);
*/

/*백터 내에서 중복을 제거하는 set
#include <set> 과 함께 set<int> vectorname; 로 선언 
값 넣을때 vectorname.insert(연산)*/

/*문자열을 합하는 함수 to_string(A) + to_string(B)*/

/*문자열을 정수형으로 바꿔주는 함수 stoi(stringname)*/

/*string으로 문자열 받아오기
string line;
    
    while (getline(cin, line)) { 
        cout << line << endl;   
    }*/