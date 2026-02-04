#include <stdio.h>
#include <string.h>
#include <ctype.h>

// 최대 1,000,000 글자이므로 전역 변수로 선언하여 스택 오버플로우 방지
char str[1000001];

int main() {
    // 공백 없는 문자열 입력
    if (scanf("%s", str) == 1) {
        for (int i = 0; str[i] != '\0'; i++) {
            // toupper 함수를 사용하여 대문자로 변환 후 출력
            putchar(toupper(str[i]));
        }
        printf("\n");
    }

    return 0;
}