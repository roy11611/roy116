#include <stdio.h>
 
 int main()
 {  

    //변수
    int d1, d2, d3 = 0;
    //변수 입력
   scanf("%d %d %d",  &d1, &d2, &d3);
   //경우의 수
   //모두 같은 경우
   if(d1 == d2 && d2 == d3){
    printf("%d\n", 10000 + d1 * 1000);
   }
   // 2개만 같은 경우
   else if(d1 == d2 && d1 != d3){
    printf("%d\n", 1000 + d1 * 100);
   }
    else if(d2 == d3 && d2 != d1){
    printf("%d\n", 1000 + d2 * 100);
   }
    else if(d1 == d3 && d1 != d2){
    printf("%d\n", 1000 + d1 * 100);
   }
    //가장 큰 수
    else if(d1 > d2 && d1 > d3){
        printf("%d\n", d1 * 100);
    }
    else  if(d2 > d1 && d2 > d3){
        printf("%d\n", d2 * 100);
    }
    else  if(d3 > d1 && d3 > d2){
        printf("%d\n", d3 * 100);
    }
    return 0;
 }