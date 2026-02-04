#include <stdio.h>

// 두 수 중 작은 값을 반환하는 매크로 함수
#define MIN(a, b) (((a) < (b)) ? (a) : (b))

int dp[1000001];

int main() {
    int n;
    scanf("%d", &n);

    // 초기 상태 설정
    dp[1] = 0;

    for (int i = 2; i <= n; i++) {
        // 1. 먼저 1을 빼는 경우를 기본으로 설정
        dp[i] = dp[i - 1] + 1;

        // 2. 2로 나누어 떨어지면, 기존 값과 2로 나눈 경우 중 최솟값 선택
        if (i % 2 == 0) {
            dp[i] = MIN(dp[i], dp[i / 2] + 1);
        }

        // 3. 3으로 나누어 떨어지면, 기존 값과 3으로 나눈 경우 중 최솟값 선택
        if (i % 3 == 0) {
            dp[i] = MIN(dp[i], dp[i / 3] + 1);
        }
    }

    printf("%d\n", dp[n]);

    return 0;
}