#include <stdio.h>

int main(void) {
    //변수 입력
    int current, bul = 0;
    //불기 연도 입력
    scanf("%d", &bul);
    //현재 연도로 변환
    current = bul - 543;
    //현재 연도 출력
    printf("%d\n", current);
        return 0;
}

