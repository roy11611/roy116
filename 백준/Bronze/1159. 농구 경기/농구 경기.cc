#include <stdio.h>

int main() {
    int n;
    int alphabet[26] = {0}; // 알파벳 개수를 저장할 배열 (0으로 초기화)
    char name[31];          // 이름은 최대 30자
    int found = 0;          // 5명 이상인 성이 있는지 체크하는 변수

    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%s", name);
        // 첫 글자의 인덱스 계산: 'a'를 0으로 만듦
        alphabet[name[0] - 'a']++;
    }

    for (int i = 0; i < 26; i++) {
        if (alphabet[i] >= 5) {
            printf("%c", i + 'a'); // 인덱스를 다시 문자로 변환하여 출력
            found = 1;
        }
    }

    if (!found) {
        printf("PREDAJA");
    }
    printf("\n");

    return 0;
}