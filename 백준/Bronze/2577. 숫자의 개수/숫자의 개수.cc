#include <stdio.h>
    int main()
    {   
        // 세 게의 자연수  a, b, c가 주어질 때, a*b*c를 계산한 결과에 0부터 9까지 각각의 숫자가 몇 번씩 쓰였는지 구하는 프로그램 작성
        int a, b, c;
        scanf("%d %d %d", &a, &b, &c);
        int result = a * b * c;
        int count[10] = {0}; // 0~9까지 숫자의 개수를 저장할 배열
        while(result > 0){
            count[result % 10]++;
            result /= 10;
        }
        for(int i = 0; i < 10; i++){
            printf("%d\n", count[i]);
        }
        return 0;
    }
