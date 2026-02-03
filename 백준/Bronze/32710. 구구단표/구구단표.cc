#include <stdio.h>

int main() {
    int N;
    int answer = 0;

    scanf("%d", &N);

    // 구구단 전체 탐색
    for (int i = 2; i <= 9; i++) {      // i: 단 (2~9)
        for (int j = 1; j <= 9; j++) {  // j: 곱하는 수 (1~9)
            // 1. 곱셈 결과(C)가 N인 경우
            // 2. 단(A) 자체가 N인 경우 (ex: 7)
            // 3. 곱하는 수(B)가 N인 경우 (ex: 1)
            if (i * j == N || i == N || j == N) {
                answer = 1;
                break;
            }
        }
        if (answer == 1) break;
    }

    printf("%d\n", answer);

    return 0;
}