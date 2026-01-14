#include  <stdio.h>
int main() {
    int basket[1000] = {0};
    int n = 0; // 바구니 개수
    int m = 0; // 방법 횟수
    int i = 0; // 방법의 첫번째 수 
    int j = 0; // 방법의 마지막 수
    int temp = 0; // 바구니 위치 변경을 위한 임시 변수
    //바구니 개수와 방법 횟수 입력
    scanf("%d %d", &n, &m);
    //바구니 초기화
    for(int a = 0; a < n; a++) {
        basket[a] = a + 1;
    }
    for(int k = 0; k < m; k++) {
        //방법 입력
        scanf("%d %d", &i, &j);
        //바구니 위치 변경
        while(i < j) {
            temp = basket[i-1];
            basket[i-1] = basket[j-1];
            basket[j-1] = temp;
            i++;
            j--;
        }
    //결과값 출력
    }    for(int b = 0; b < n; b++) {
        printf("%d\n", basket[b]);
    }
    return 0;
}