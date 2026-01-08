#include <stdio.h>

int main()
{   
    //변수
    int num = 0;
    //변수 입력 
    scanf("%d", &num);

    //만일 num이 4씩 증가 할 떄 마다 num / 4 만큼 long 출력
    for(int i = 0; i < num / 4; i++){
        printf("long ");
    }
    printf("int");
    putchar('\n');
    return 0;
}