#include <stdio.h>
#define MAX_NUM 10000

int main()
{   
    //변수 설정
    int n = 0;
    int num[MAX_NUM] = {0};
    int t = 0; // target
    int count = 0;

    // n 만큼 반복 후 배열에 저장
    scanf("%d", &n);
    for(int i = 0 ; i < n; i++){
        scanf("%d", &num[i]);
    }   
    // 타켓 설정
    scanf("%d", &t);

    // 타켓 찾고 카운팅하기
    for(int i = 0; i < n; i++){
    if(num[i] == t){
        count++;
    }
    }
    printf("%d\n", count);
    return 0;
}