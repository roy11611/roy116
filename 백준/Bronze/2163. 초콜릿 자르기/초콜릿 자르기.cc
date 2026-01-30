#include <stdio.h>

    int main()
    {   
        // 정수 n,m,입력
        // 초콜릿의 크기는 n x m
        // 1 x 1 크기의 조각으로 나누기 위한 최소한의 가로 또는 세로 자르는 횟수 출력
        int n, m;
        scanf("%d %d", &n, &m);
        printf("%d\n", n * m - 1);
        return 0;
    }   