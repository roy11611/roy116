#include <stdio.h>
#define MIN_SCORE 0

int main() {
    int m = MIN_SCORE;
    int count = 0;
    int score[10000] = {0};
    double avg = 0;

    scanf("%d", &count);
    for(int i = 0; i < count; i++) {
        scanf("%d", &score[i]);
    
            if(score[i] > m) {
                m = score[i];
            }
        }
    for(int i = 0; i < count; i++) {
        avg += (double)score[i] / m * 100;
    }
    avg = avg / count;
    printf("%f\n", avg);
    return 0;
}