#include <stdio.h>
#include <string.h>

int main() {
    char str[101];
    scanf("%s", str);

    int len = strlen(str);
    for (int i = 0; i < len; i++) {
        printf("%c", str[i]);
        
        // 10번째 글자일 때 줄바꿈 (인덱스는 0부터 시작하므로 i+1 기준)
        if ((i + 1) % 10 == 0) {
            printf("\n");
        }
    }
    
    // 마지막에 줄바꿈이 안 된 경우를 위해 추가 (선택사항)
    if (len % 10 != 0) {
        printf("\n");
    }

    return 0;
}