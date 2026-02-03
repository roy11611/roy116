#include <stdio.h>

// 최대공약수(GCD)를 구하는 함수
int get_gcd(int a, int b) {
    while (b != 0) {
        int r = a % b;
        a = b;
        b = r;
    }
    return a;
}

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        int a, b;
        scanf("%d %d", &a, &b);

        int gcd = get_gcd(a, b);
        
        // 최소공배수(LCM) = (A * B) / GCD
        // 곱셈을 먼저 하면 int 범위를 넘을 수 있으니 나누기를 먼저 하거나 long long을 고려하세요.
        // 이 문제의 범위(45,000)에서는 int로도 충분합니다.
        printf("%d\n", (a * b) / gcd);
    }

    return 0;
}