#include <stdio.h>

int main()
{
    // 변수
   double A, B = 0;
   double div = 0; 
    // 정수 입력
    scanf("%lf %lf", &A, &B);
    // 나누기
    div = A / B;
    // 결과 출력
    printf("%.9lf\n", div);
    return 0;
}