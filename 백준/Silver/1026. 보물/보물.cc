#include <stdio.h>

    int main()
    {   
        // 입력 할 숫자의 개수 N 입력
        // N개의 숫자 입력
        // B에있는 숫자 입력
        // S = A[0] × B[0] + ... + A[N-1] × B[N-1]
        // S의 값을 가장 작게 만들기 위한 A의 수를 재배열
    
        int n;
        int a[50];
        int b[50];
        int sum = 0;
        scanf("%d", &n);
        for(int i = 0; i < n; i++){
            scanf("%d", &a[i]);
        }

        for(int i = 0; i < n; i++){
            scanf("%d", &b[i]);
        }
        // a 오름차순 정렬
        for(int i = 0; i < n - 1; i++){
            for(int j = i + 1; j < n; j++){
                if(a[i] > a[j]){
                    int temp = a[i];
                    a[i] = a[j];
                    a[j] = temp;
                }
            }
        }
        // b 내림차순 정렬 
        for(int i = 0; i < n - 1; i++){
            for(int j = i + 1; j < n; j++){
                if(b[i] < b[j]){
                    int temp = b[i];
                    b[i] = b[j];
                    b[j] = temp;
                }
            }
        }
        for(int i = 0; i < n; i++){
            sum += (a[i] * b[i]);
        }
        printf("%d\n", sum);
        

        return 0;
    }