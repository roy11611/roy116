#include <stdio.h>

int main()
    {  
        int y = 0;
        int m = 0;
        int n = 0;
        int t[256] = {0};

        scanf("%d", &n);
        for(int i = 0; i < n; i++){

            scanf("%d", &t[i]);
           //계산 수식 
           y += (t[i] / 30 + 1) * 10;

           m += (t[i] / 60 + 1) * 15;

        }

        if(y > m){
            printf("M %d\n",m);
        }
        if(y < m){
            printf("Y %d\n", y);
        }
        if(y == m){
            printf("Y M %d ", y);
        }



        return 0;
    }