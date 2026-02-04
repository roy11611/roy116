#include <stdio.h>
#include <string.h>

int main() {
    int n;
    scanf("%d", &n);

    // 각 과일의 개수를 저장할 배열 (S, B, L, P 순서)
    int fruits[4] = {0}; 
    char name[20];
    int count;

    for (int i = 0; i < n; i++) {
        scanf("%s %d", name, &count);

        // 문자열 비교를 통해 어떤 과일인지 판별
        if (strcmp(name, "STRAWBERRY") == 0) fruits[0] += count;
        else if (strcmp(name, "BANANA") == 0) fruits[1] += count;
        else if (strcmp(name, "LIME") == 0) fruits[2] += count;
        else if (strcmp(name, "PLUM") == 0) fruits[3] += count;
    }

    // 과일 중 정확히 5개가 있는지 확인
    int bell = 0;
    for (int i = 0; i < 4; i++) {
        if (fruits[i] == 5) {
            bell = 1;
            break;
        }
    }

    if (bell) printf("YES\n");
    else printf("NO\n");

    return 0;
}