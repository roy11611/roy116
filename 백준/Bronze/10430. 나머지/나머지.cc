#include <stdio.h>

int main(void) {
    int a, b, c = 0;
    int A, B, C, D = 0;
    //변수입력
    scanf("%d %d %d", &a, &b, &c);
    //계산
    A = (a + b) % c;
    B = ((a % c) + (b % c))%c;
    C = (a * b) % c;
    D = ((a % c) * (b % c))%c;
    //출력
    printf("%d\n", A);
    printf("%d\n", B);
    printf("%d\n", C);
    printf("%d\n", D);
    return 0;
}
