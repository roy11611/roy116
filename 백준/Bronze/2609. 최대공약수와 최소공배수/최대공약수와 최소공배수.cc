#include <stdio.h>

// 유클리드 호제법을 이용한 GCD 함수
int get_gcd(int a, int b) {
    while (b != 0) {
        int r = a % b;
        a = b;
        b = r;
    }
    return a;
}

int main() {
    int a, b;
    if (scanf("%d %d", &a, &b) != 2) return 0;

    int gcd = get_gcd(a, b);
    
    // 첫째 줄에 최대공약수, 둘째 줄에 최소공배수 출력
    printf("%d\n", gcd);
    printf("%d\n", (a * b) / gcd);

    return 0;
}