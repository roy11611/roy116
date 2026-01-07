#include <stdio.h>

 int main()
 {  
    //변수
    int h, m = 0;

    scanf("%d %d", &h, &m);

    //시간 설정
     m = m - 45;

    if(m < 0){
        h = h - 1;
        m = 60 + m;
    }
    if(h < 0){
        h = 23;
    }

    printf("%d %d", h, m);

    return 0;
 }