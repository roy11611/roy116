#include <stdio.h>

// 한수인지 확인하는 함수
int is_hansu(int n) {
    if (n < 100) {
        return 1; // 1~99는 무조건 한수
    }
    
    if (n == 1000) return 0; // 1000은 한수가 아님

    int hundred = n / 100;          // 백의 자리
    int ten = (n / 10) % 10;        // 십의 자리
    int one = n % 10;               // 일의 자리

    // 등차수열 조건 확인: (백 - 십) == (십 - 일)
    if ((hundred - ten) == (ten - one)) {
        return 1;
    }
    
    return 0;
}

int main() {
    int n, count = 0;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        if (is_hansu(i)) {
            count++;
        }
    }

    printf("%d\n", count);

    return 0;
}