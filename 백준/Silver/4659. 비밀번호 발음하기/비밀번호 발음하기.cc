#include <stdio.h>
#include <string.h>
#include <stdbool.h>

// 모음인지 확인하는 함수
bool isVowel(char c) {
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}

int main() {
    char str[21];

    while (1) {
        scanf("%s", str);
        if (strcmp(str, "end") == 0) break;

        bool hasVowel = false;
        bool isAcceptable = true;
        int vCount = 0; // 연속된 모음 개수
        int cCount = 0; // 연속된 자음 개수

        for (int i = 0; i < strlen(str); i++) {
            // 규칙 1: 모음 포함 여부 확인
            if (isVowel(str[i])) {
                hasVowel = true;
                vCount++;
                cCount = 0;
            } else {
                cCount++;
                vCount = 0;
            }

            // 규칙 2: 모음 혹은 자음 3회 연속 확인
            if (vCount >= 3 || cCount >= 3) {
                isAcceptable = false;
                break;
            }

            // 규칙 3: 같은 글자 연속 2번 확인 (ee, oo 제외)
            if (i > 0 && str[i] == str[i - 1]) {
                if (str[i] != 'e' && str[i] != 'o') {
                    isAcceptable = false;
                    break;
                }
            }
        }

        // 최종 판단: 모음이 하나도 없어도 불합격
        if (!hasVowel) isAcceptable = false;

        if (isAcceptable) {
            printf("<%s> is acceptable.\n", str);
        } else {
            printf("<%s> is not acceptable.\n", str);
        }
    }

    return 0;
}