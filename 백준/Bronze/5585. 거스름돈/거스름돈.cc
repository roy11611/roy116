#include <stdio.h>

int main()
{
    //거스름돈 계산 문제
    //손님에게 거슬러 줘야 할 돈이 N원 일 때
    //거슬러 줘야 할 돈 N원이 주어졌을 때
    //최소한의 동전 개수로 거슬러 주기
    //동전의 단위는 500원, 100원, 50원, 10원, 5원, 1원
    //이미 1000원을 낸 상태로 가정
    //내야할 돈 N 입력
    int N;
    scanf("%d", &N);
    int change = 1000 - N; //거슬러 줘야 할 돈
    int coin_values[] = {500, 100, 50, 10, 5, 1};
    int coin_count = 0; //거슬러 줄 동전 개수
    for(int i = 0; i < 6; i++){
        while(change >= coin_values[i]){
            change -= coin_values[i];
            coin_count++;
        }
    }
    printf("%d\n", coin_count);
    

    return 0;
}