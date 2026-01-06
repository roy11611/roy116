#include <stdio.h>

int main() {
    // 변수 설정
    int num[9] = {0};
    int asc = 0;
    int des = 0;

    // 입력
    for (int i = 0; i < 8; i++) {
        scanf("%d", &num[i]);
    }

    // 판별 (반복문에서는 카운트만 수행)
    for (int i = 0; i < 8; i++) {
        if (num[i] == i + 1) {
            asc++;
        }
        else if (num[i] == 8 - i) {
            des++;
        }
    }

    // 결과 출력 (반복문 종료 후 판단)
    if (asc == 8) {
        printf("ascending\n");
    }
    else if (des == 8) {
        printf("descending\n");
    }
    else {
        printf("mixed\n");
    }

    return 0;
}