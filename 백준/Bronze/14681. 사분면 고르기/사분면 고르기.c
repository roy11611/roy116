# include <stdio.h>
int main(){

    int x,y = 0;
    // x,y 값 입력
    scanf("%d",&x);
    scanf("%d",&y);
    // 사분면 계산
        /* 만일 x,y 양수 일 때
            둘 중 하나 음수 일 때
            둘 다 음수 일 때
        */
    if(x > 0 && y > 0){
        printf("1\n");
    }
    else if(x < 0 && y > 0){
        printf("2\n");
    }
    if(x < 0 && y < 0){
        printf("3\n");
    }
    if(x > 0 && y < 0){
        printf("4\n");
    }
return 0;
}
