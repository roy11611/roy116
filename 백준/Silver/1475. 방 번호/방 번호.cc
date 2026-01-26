#include <stdio.h>
#include <string.h>

int main()
{   
    char room_number[100000] = {0};
    int counts[10] = {0, };
    // 방 번호에 0부터 9까지 각 숫자가 몇 번 나오는지 세기
    scanf("%s", room_number);
    for(int i = 0; room_number[i] != '\0'; i++){
        int num = room_number[i] - '0';
        counts[num]++;
    }
    // 6이 나온 횟수와 9가 나온 횟수 더하기
    int six_nine_count = counts[6] + counts[9];
    // 더한 값을 2로 나누기 (만약 홀수라면 반올림)
    int six_nine_sets = (six_nine_count + 1) / 2;
    // 갱신
    counts[6] = six_nine_sets;
    counts[9] = six_nine_sets;
     // 공식 : (6의 개수 + 9의 개수 + ) / 2
    // 최대값 찾기
    int max_count = 0;
     for(int i = 0 ; i < 10; i++){
        if(counts[i] > max_count){
            max_count = counts[i];
        }
     }
     // 0123456789 각각 필요한 개수
     //6과 9를 위해 계산한 세트 개수
     // 이들 중 가장 큰 숫자가 정답
    printf("%d\n", max_count);
    
    return 0;
}