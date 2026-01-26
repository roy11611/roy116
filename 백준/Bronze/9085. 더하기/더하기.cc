#include <stdio.h>

int main()
{   
    int t = 0;
    int n = 0;
    int num = 0;


    scanf("%d", &t);

    for(int i = 0; i < t; i++){
        //합계 초기화
        int sum = 0;
        scanf("%d",&n);
        for(int j = 0; j < n; j++){
            scanf("%d",&num);
            sum +=num;
        }
        printf("%d\n", sum);
    }

    return 0;
}