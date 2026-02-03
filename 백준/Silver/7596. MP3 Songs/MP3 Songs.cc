#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// 문자열 비교 함수 (사전순)
int compare(const void *a, const void *b) {
    return strcmp((char *)a, (char *)b);
}

int main() {
    int n, case_num = 1;
    char songs[200][256]; // 최대 200곡, 제목 길이 최대 255자

    while (1) {
        scanf("%d", &n);
        if (n == 0) break; // n이 0이면 종료

        // 버퍼에 남은 개행 문자 제거
        getchar(); 

        for (int i = 0; i < n; i++) {
            // 공백 포함 한 줄 읽기
            fgets(songs[i], sizeof(songs[i]), stdin);
            // fgets로 읽으면 끝에 포함되는 '\n' 제거
            songs[i][strcspn(songs[i], "\n")] = '\0';
        }

        // 사전순 정렬
        qsort(songs, n, sizeof(songs[0]), compare);

        // 결과 출력
        printf("%d\n", case_num++);
        for (int i = 0; i < n; i++) {
            printf("%s\n", songs[i]);
        }
    }

    return 0;
}