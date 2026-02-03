#include <stdio.h>

int main() {
    int N, U, L;
    
    // N: 문제 수, U: 유니온 레벨, L: 최고 레벨
    if (scanf("%d %d %d", &N, &U, &L) != 3) return 0;

    // 1. 기본 조건 확인 (N >= 1000)
    if (N >= 1000) {
        // 2. 추가 조건 확인 (U >= 8000 또는 L >= 260)
        if (U >= 8000 || L >= 260) {
            printf("Very Good\n");
        } else {
            printf("Good\n");
        }
    } else {
        // 기본 조건 미달
        printf("Bad\n");
    }

    return 0;
}