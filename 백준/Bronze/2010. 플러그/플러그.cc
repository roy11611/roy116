#include <stdio.h>

int main()
{   
    // 플러그의 개수 N 입력
    // N개의 플러그에 연결된 전자기기의 수 입력
    // 플러그에 연결된 전자기기의 수의 합 출력
    int n;
    int sum = 0;
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        int device_count;
        scanf("%d", &device_count);
        sum += device_count;
    }
    // 멀티탭이 하나이므로 총 플러그 개수에서 1을 뺀 값이 실제로 사용할 수 있는 플러그 개수
    printf("%d\n", sum - (n - 1));

    return 0;
}