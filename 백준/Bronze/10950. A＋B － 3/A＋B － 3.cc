#include <stdio.h>

int main(void) {
    int t = 0;
    int a, b = 0;
    int sum[t];
    // t 입력
    scanf("%d", &t);
    // t 만큼 반복
    for(int i = 1; i <= t; i++){
        scanf("%d %d", &a, &b);
        sum[i] = a + b;
    
    // 테스트 케이스 입력
    // 계산
    // 결과 출력
   
        printf("%d\n", sum[i]);
    }
    return 0;
}
