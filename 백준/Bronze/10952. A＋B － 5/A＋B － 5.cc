#include <stdio.h>

int main() {
    int a[256],b[256] = {0};
    int sum[256] = {0};

    while(1){
        int i = 0;
        scanf("%d %d", &a[i], &b[i]);
        if(a[i] == 0 && b[i] == 0) break;
        sum[i] = a[i] + b[i];
        printf("%d\n", sum[i]);
        i++;
    }
   
    return 0;
}