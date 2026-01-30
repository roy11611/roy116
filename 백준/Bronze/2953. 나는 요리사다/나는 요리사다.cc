#include <stdio.h>

    int main()
    {   
        // 총 다섯 개 중에 각 참가자가 얻은 네 개의 평가 점수가 공백으로 구분됨
        // 첫번째 참가자부터 다섯번째 참가자 까지 순서대로 주어짐
        // 항상 우승자가 유일한 경우만 입력으로 주어짐
        // 참가자의 평가 점수 입력
        // 각 참가자의 점수 합 계산
        int max_score = 0;
        int winner = 0;
        for(int i = 1; i <= 5; i++){
            int score_sum = 0;
            for(int j = 0; j < 4; j++){
                int score;
                scanf("%d", &score);
                score_sum += score;
            }
            if(score_sum > max_score){
                max_score = score_sum;
                winner = i;
            }
        }
        printf("%d %d\n", winner, max_score);
        return 0;
    }