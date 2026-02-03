#include <stdio.h>

int main()
{
    //땅에 노드 n개가 주어지고 이 땅의 넓이 계산
    //단 노드 좌표는 2차원 정수 좌표로 주어지고 같은 위치에 여러 개가 발견 될 수 있으며 
    //x 축의 양의 방향은 동쪽 y 축의 양의 방향은 북쪽임
    // 넓이는 직사각형의 형태로 계산하며 직사각형의 한 변은 x 축 또는 y 축에 평행함
    // 노드 좌표의 개수 n 입력
    // 각 노드의 좌표 입력
    //최소 크기의 직서각형 넓이 출력
    int n;
    scanf("%d", &n);
    int x_min = 10000, x_max = -10000;
    int y_min = 10000, y_max = -10000;
    for (int i = 0; i < n; i++) {
        int x, y;
        scanf("%d %d", &x, &y);
        if (x < x_min) x_min = x;
        if (x > x_max) x_max = x;
        if (y < y_min) y_min = y;
        if (y > y_max) y_max = y;
    }
    int area = (x_max - x_min) * (y_max - y_min);
    printf("%d\n", area);
    
    
    return 0;
}