#include <stdio.h>

    int main()

    {   
        // 고유번호의 처음 5자리 숫자를 빈칸을 두고 하나씩 입력
        // 검증수는 5개의 숫자를 각각 제곱한 수의 합을 10으로 나눈 나머지
        int num[5];
        int sum = 0;
        for(int i = 0; i < 5; i++){
            scanf("%1d", &num[i]);
            sum += (num[i] * num[i]);
        }

        printf("%d\n", sum % 10);

        return 0;
    }