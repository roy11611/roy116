#include <stdio.h>

int main()
{
    //1223334444.. 이러한 규칙의 수열이 있음
    // 시작구간 a와 끝구간 b 입력
    // a와b 구간에 해당하는 모든 수의 합 출력
    int a, b;
    scanf("%d %d", &a, &b);
    int sum = 0;
    int current_number = 1; //현재 수
    int count = 0; //현재 수의 개수
    for(int i = 1; i <= b; i++){
        count++;
        if(count > current_number){
            current_number++;
            count = 1;
        }
        if(i >= a){
            sum += current_number;
        }
    }
    printf("%d\n", sum);

    return 0;
}