#include <stdio.h>

// 두 배열이 같은지 확인하는 함수
int is_equal(int a[], int b[], int n) {
    for (int i = 0; i < n; i++) {
        if (a[i] != b[i]) return 0;
    }
    return 1;
}

int main() {
    int n;
    int a[10000], b[10000];

    scanf("%d", &n);
    for (int i = 0; i < n; i++) scanf("%d", &a[i]);
    for (int i = 0; i < n; i++) scanf("%d", &b[i]);

    // 1. 시작부터 같은지 확인
    if (is_equal(a, b, n)) {
        printf("1\n");
        return 0;
    }

    // 2. 선택 정렬 수행 (맨 뒤부터 채우기)
    for (int i = n - 1; i > 0; i--) {
        int max_idx = i;
        for (int j = 0; j < i; j++) {
            if (a[j] > a[max_idx]) {
                max_idx = j;
            }
        }

        // 가장 큰 값이 현재 위치(i)가 아니라면 교환
        if (max_idx != i) {
            int temp = a[i];
            a[i] = a[max_idx];
            a[max_idx] = temp;

            // 교환 직후 배열 B와 같은지 확인
            if (is_equal(a, b, n)) {
                printf("1\n");
                return 0;
            }
        }
    }

    // 끝까지 정렬했는데 같은 적이 없다면 0
    printf("0\n");
    return 0;
}