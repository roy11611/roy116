#include <stdio.h>

// 숫자에 0이 포함되어 있는지 확인하는 함수
int has_zero(int num) {
    while (num > 0) {
        if (num % 10 == 0) return 1; // 일의 자리가 0이면 참
        num /= 10; // 다음 자릿수로 이동
    }
    return 0;
}

int main() {
    int t, n;
    scanf("%d", &t); // 테스트 케이스 개수

    while (t--) {
        scanf("%d", &n);
        
        n++; // n보다 큰 숫자부터 시작
        while (has_zero(n)) {
            n++; // 0이 포함되어 있다면 계속 1씩 증가
        }
        
        printf("%d\n", n);
    }

    return 0;
}