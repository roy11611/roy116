#include <stdio.h>

int main()
    {
    int std[256] = {0};
    int n = 0; // 학생 수

    // 학생 수 입력
    for(int i = 0; i < 30; i++){
        scanf("%d", &n);
        std[n - 1] = 1;
    }
    for(int i = 0; i < 30; i++){
        if(std[i] == 0){
            printf("%d\n", i + 1);
        }
    }
    return 0;
}