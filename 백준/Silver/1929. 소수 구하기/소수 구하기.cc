#include <stdio.h>

int main()
    {
        int m,n = 0;
        scanf("%d %d", &m, &n);

        for (int i = m; i <= n; i++) {
            if(i < 2){
                continue;
            }
           else {
                int isPrime = 1;
                for(int j = 2; j*j <= i; j++) {
                    if(i % j == 0) {
                        isPrime = 0;
                        break;
                    }
                }
                if(isPrime) {
                    printf("%d\n", i);
                }
            }
        }

        return 0;
    }