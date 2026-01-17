#include <stdio.h>
#include <math.h>

// 소수 탐색 함수
int Isprime(int num);

int main()
{   
    int n = 0;
    int num[256] = {0};
    int prime = 0;

    scanf("%d", &n);

    for(int i = 0; i < n; i++){
        scanf("%d", &num[i]);
        if(Isprime(num[i])){
            prime++;
        }
    }
    printf("%d\n", prime);

    return 0;
}

//소수 탐색 함수
int Isprime(int num)
{
    // 1 이하의 수는 소수가 아님
    if(num <= 1){
        return 0;
    }
    // 2 부터 num - 1 숫자를 num으로 나눌떄 나머지가 0이 있는 경우 체크
    for(int i = 2; i <= sqrt(num); i++){
        if(num % i == 0){
            return 0; // 나누어 떨어지면 소수 아님
        }
    }
     return 1; //소수임
}