#include <stdio.h>

void Print_n(int n);

int main()
{
    int n = 0;
    scanf("%d",&n);
    Print_n(n);
    return 0;
}
void Print_n(int n){
    for(int i = 0; i < n; i++){
        printf("%d\n", i+1);
    }
}