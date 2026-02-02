#include <stdio.h>

    int main()
    {
        //무한히 큰 배열에 분수들이 있음
            //2차원 배열로 생각
            // 행의 가로줄과 세로줄은 1/1 부터 시작하여 무한히 증가
            // 행의 대각선 방향은 2/2, 3/3, 4/4 ...
            // 대각선 방향으로 분수들이 지그재그로 배치
            //정수 x 입력
        //분수 출력
        int x;
        scanf("%d", &x);
        int line = 1; //대각선 라인
        while(x > line){
            x -= line;
            line++;
        }
        int numerator, denominator; //분자, 분모
        if(line % 2 == 0){ //짝수 라인
            numerator = x;
            denominator = line - x + 1;
        } else { //홀수 라인
            numerator = line - x + 1;
            denominator = x;
        }
        printf("%d/%d\n", numerator, denominator);

        

        return 0;
    }