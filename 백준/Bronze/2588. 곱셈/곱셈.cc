#include <stdio.h>

int main(void) {
    int A, B;
    scanf("%d", &A);
    scanf("%d", &B);

    printf("%d\n", A * (B % 10));         // 1의 자리
    printf("%d\n", A * ((B / 10) % 10));  // 10의 자리
    printf("%d\n", A * (B / 100));        // 100의 자리
    printf("%d\n", A * B);                // 전체 곱

    return 0;
}
