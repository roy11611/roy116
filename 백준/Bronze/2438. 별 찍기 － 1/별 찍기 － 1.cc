#include <stdio.h>

int main(void) {
    int t = 0;
    scanf("%d", &t);
    // t 만큼 반복
    //줄 반복
    for(int i = 1; i <= t; i++){
        //별 반복
        for(int j = 1; j <= i; j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
