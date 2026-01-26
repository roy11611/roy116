#include <stdio.h>
int main() {

    int c = 0;
    //학생 수 입력
    scanf("%d", &c);
    for(int i = 0; i < c; i++){
        int n =0;
        scanf("%d", &n);
        //케이스 마다 초기화
        int score[1000];
        int sum = 0;
        //점수 입력
      for(int j = 0; j < n; j++){
        scanf("%d", &score[j]);
        // 점수 합계 구하기
        sum += score[j];
     }  
     //평균 계산
     double avg = (double)sum / n;

     // 평균 넘는 학생 수 세기
     int count = 0;
        for(int j = 0; j < n; j++){
            if(score[j] > avg){
                count++;
            }
      }
        //비율 계산
        double ratio = ((double)count / n) * 100;
        //소수점 셋째 자리까지 출력
      printf("%.3lf%%\n", ratio);
    }
    return 0;
}