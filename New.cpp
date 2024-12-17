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
