#include <stdio.h>

 int main()
 {  
    int t = 0;
    char num[1000] = "";
    long long sum = 0;
    
    scanf("%d", &t);
    scanf("%s", num);
    for(int i = 0; i < t ; i++){
        sum += (num[i] - '0');
    }
    printf("%lld\n", sum);

    return 0;
 }