#include <stdio.h>

int main() {
    int n, k;
    // student[성별][학년] 형태의 2차원 배열 (0으로 초기화)
    int student[2][7] = {0};
    int total_rooms = 0;

    scanf("%d %d", &n, &k);

    // 1. 학생 정보 입력 및 카운팅
    for (int i = 0; i < n; i++) {
        int s, y;
        scanf("%d %d", &s, &y);
        student[s][y]++;
    }

    // 2. 각 그룹별 필요한 방의 개수 계산
    for (int s = 0; s <= 1; s++) { // 성별 0, 1
        for (int y = 1; y <= 6; y++) { // 학년 1 ~ 6
            int count = student[s][y];
            if (count > 0) {
                // 필요한 방의 개수 = (인원 / K) + (나머지가 있으면 1 추가)
                total_rooms += (count / k);
                if (count % k != 0) {
                    total_rooms++;
                }
            }
        }
    }

    printf("%d\n", total_rooms);

    return 0;
}