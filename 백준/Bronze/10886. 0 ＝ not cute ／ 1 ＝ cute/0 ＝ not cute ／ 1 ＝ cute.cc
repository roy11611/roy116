#include <stdio.h>

int main() {
    int m =0;
    int n[256] = {0};
    int cute_count = 0;
    int not_cute_count = 0;    
    scanf("%d", &m);
    for(int i = 0; i < m; i++){
        scanf("%d", &n[i]);
        if(n[i] == 1) cute_count++;
        if(n[i] == 0) not_cute_count++;
    }
    if(cute_count > not_cute_count){
        printf("Junhee is cute!\n");
    } else {
        printf("Junhee is not cute!\n");
    }
    return 0;
}