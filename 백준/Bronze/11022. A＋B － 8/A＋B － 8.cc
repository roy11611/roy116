#include <stdio.h>

int main()
{
    //변수 설정
    int case_num = 0;
    int x[256] = {0};
    int y[256]= {0};

    scanf("%d", &case_num);
    // case 만큼 반복
    for(int i = 0; i < case_num; i++){
        scanf("%d %d", &x[i], &y[i]);
    }

    // 결과 출력
    for(int i = 0; i < case_num; i++){
        printf("Case #%d: %d + %d = %d\n", i+1, x[i], y[i], x[i] + y[i]);
    }


    return 0;
}