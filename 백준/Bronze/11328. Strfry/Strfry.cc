#include <stdio.h>
#include <string.h>

int main() {
    int N;
    scanf("%d", &N);

    while (N--) {
        char s1[1001], s2[1001];
        int alphabet[26] = {0, }; // 각 알파벳 개수를 기록할 배열
        int possible = 1;

        scanf("%s %s", s1, s2);

        // 첫 번째 문자열: 알파벳 개수 증가
        for (int i = 0; s1[i] != '\0'; i++) {
            alphabet[s1[i] - 'a']++;
        }

        // 두 번째 문자열: 알파벳 개수 감소
        for (int i = 0; s2[i] != '\0'; i++) {
            alphabet[s2[i] - 'a']--;
        }

        // 모든 알파벳 개수가 0인지 확인
        for (int i = 0; i < 26; i++) {
            if (alphabet[i] != 0) {
                possible = 0;
                break;
            }
        }

        if (possible) printf("Possible\n");
        else printf("Impossible\n");
    }

    return 0;
}