#include <stdio.h>

// 수열의 값이 어디까지 커질지 모르므로 넉넉하게 체크 배열 선언 (전역 변수)
// N=100,000일 때 수열의 최대값은 약 1,000,000을 넘지 않습니다.
int visited[1000001];
int A[100001];

int main() {
    int N;
    scanf("%d", &N);

    A[0] = 0;
    visited[0] = 1; // 0은 이미 수열에 존재함

    for (int i = 1; i <= N; i++) {
        int next = A[i - 1] - i;

        // 음수이거나 이미 존재한다면 +i로 변경
        if (next < 0 || visited[next] == 1) {
            next = A[i - 1] + i;
        }

        A[i] = next;
        // 다음 숫자가 체크 배열 범위를 넘지 않는지 확인 후 체크
        if (next <= 1000000) {
            visited[next] = 1;
        }
    }

    printf("%d\n", A[N]);

    return 0;
}