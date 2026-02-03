#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    // 전체를 감싸는 영역의 좌표 (초기값 설정)
    int total_x_min = 11, total_y_min = 11;
    int total_x_max = -11, total_y_max = -11;

    for (int i = 0; i < N; i++) {
        int x1, y1, x2, y2;
        scanf("%d %d %d %d", &x1, &y1, &x2, &y2);

        // 첫 번째 울타리이거나, 현재 범위보다 더 넓은 좌표가 들어오면 갱신
        if (i == 0) {
            total_x_min = x1;
            total_y_min = y1;
            total_x_max = x2;
            total_y_max = y2;
        } else {
            if (x1 < total_x_min) total_x_min = x1;
            if (y1 < total_y_min) total_y_min = y1;
            if (x2 > total_x_max) total_x_max = x2;
            if (y2 > total_y_max) total_y_max = y2;
        }

        // 둘레 계산: 2 * (가로길이 + 세로길이)
        int width = total_x_max - total_x_min;
        int height = total_y_max - total_y_min;
        printf("%d\n", 2 * (width + height));
    }

    return 0;
}