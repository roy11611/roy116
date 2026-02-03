#include <stdio.h>
#include <stdlib.h>

// 오름차순 정렬을 위한 비교 함수
int compare(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

// 최대 100만 개의 입력을 처리하기 위해 전역 배열 선언
int erda[1000000];
int origin[1000000];

int main() {
    int N, M;
    scanf("%d %d", &N, &M);

    for (int i = 0; i < N; i++) scanf("%d", &erda[i]);
    for (int i = 0; i < M; i++) scanf("%d", &origin[i]);

    // 1. 시간순으로 정렬
    qsort(erda, N, sizeof(int), compare);
    qsort(origin, M, sizeof(int), compare);

    // 2. 에르다 노바 계산
    int erda_count = 0;
    int erda_last_use = -200; // 초기값은 쿨타임 영향을 받지 않게 충분히 작은 값
    int erda_immune_end = 0;

    for (int i = 0; i < N; i++) {
        // 쿨타임(100)이 지났고, 면역(90)도 끝났는지 확인
        if (erda[i] >= erda_last_use + 100 && erda[i] >= erda_immune_end) {
            erda_count++;
            erda_last_use = erda[i];
            erda_immune_end = erda[i] + 90;
        }
    }

    // 3. 오리진 스킬 계산
    int origin_count = 0;
    int origin_last_use = -400;
    int origin_immune_end = 0;

    for (int i = 0; i < M; i++) {
        // 쿨타임(360)이 지났고, 면역(90)도 끝났는지 확인
        if (origin[i] >= origin_last_use + 360 && origin[i] >= origin_immune_end) {
            origin_count++;
            origin_last_use = origin[i];
            origin_immune_end = origin[i] + 90;
        }
    }

    // 결과 출력
    printf("%d %d\n", erda_count, origin_count);

    return 0;
}