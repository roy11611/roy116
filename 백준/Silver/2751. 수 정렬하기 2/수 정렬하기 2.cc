// 정렬 문제
    // 테이스 케이스 t입력
    // 각 줄 마다 정수 1개씩 입력
    // 각 테스트 케이스 마다 입력된 정수를 오름차순으로 정렬하여 출력
#include <stdio.h>
#include <stdlib.h> // qsort를 사용하기 위한 헤더


int data[1000000]; 

// qsort에 들어갈 비교 함수
// a가 작으면 음수, 같으면 0, 크면 양수를 반환해야 함
int compare(const void *a, const void *b) {
    // void 포인터를 int 포인터로 변환 후 역참조하여 값을 뺌
    return (*(int*)a - *(int*)b);
}

int main() {
    int N;
    
    // 입력
    if (scanf("%d", &N) != 1) return 0;
    
    for (int i = 0; i < N; i++) {
        scanf("%d", &data[i]);
    }
    
    // 퀵 정렬 (qsort) 함수 호출
    // 매개변수: 배열주소, 개수, 자료형크기, 비교함수
    qsort(data, N, sizeof(int), compare);
    
    // 출력
    for (int i = 0; i < N; i++) {
        printf("%d\n", data[i]);
    }
    
    return 0;
}
   