#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main() {
    int n, group_word_count = 0;
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        char word[101];
        scanf("%s", word);

        bool visited[26] = {false}; // 각 알파벳의 등장 여부 기록
        bool is_group_word = true;
        int len = strlen(word);

        for (int j = 0; j < len; j++) {
            // 현재 문자가 직전 문자와 다를 때만 체크
            if (j > 0 && word[j] != word[j - 1]) {
                // 그런데 이전에 이미 나왔던 문자라면? 그룹 단어가 아님!
                if (visited[word[j] - 'a']) {
                    is_group_word = false;
                    break;
                }
            }
            // 현재 방문한 문자를 표시 (알파벳 'a'를 인덱스 0으로 변환)
            visited[word[j] - 'a'] = true;
        }

        if (is_group_word) {
            group_word_count++;
        }
    }

    printf("%d\n", group_word_count);

    return 0;
}