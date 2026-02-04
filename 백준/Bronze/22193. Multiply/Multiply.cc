#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// 결과를 저장할 배열 (최대 50,000 + 50,000 자릿수)
int res[100001];

int main() {
    int n, m;
    scanf("%d %d", &n, &m);

    char *a = (char *)malloc(n + 1);
    char *b = (char *)malloc(m + 1);
    scanf("%s %s", a, b);

    // 0 처리
    if (a[0] == '0' || b[0] == '0') {
        printf("0\n");
        return 0;
    }

    // 세로셈 알고리즘
    for (int i = n - 1; i >= 0; i--) {
        for (int j = m - 1; j >= 0; j--) {
            int mul = (a[i] - '0') * (b[j] - '0');
            int sum = mul + res[i + j + 1];

            res[i + j + 1] = sum % 10;    // 현재 자릿수 저장
            res[i + j] += sum / 10;        // 올림수(Carry) 처리
        }
    }

    // 출력 (앞부분의 0은 건너뜀)
    int start = 0;
    while (start < n + m && res[start] == 0) start++;
    
    for (int i = start; i < n + m; i++) {
        printf("%d", res[i]);
    }
    printf("\n");

    free(a);
    free(b);
    return 0;
}