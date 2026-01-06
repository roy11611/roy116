#include <stdio.h>
/* 이진탐색 알고리즘
    <n개의 정수a가 주어져 있을때, 이 안에 x라는 정수가 존재하는지 알아내는 프로그램>
    첫째 줄에 자연수가 주어짐
    다음 줄에 m이 주어짐
    다음 줄에는 m개의 수가 주어지며, 이 수들이 a안에 존재하는지 알아내기
    각 수에 대해 존재하면 1, 존재하지 않으면 0을 출력
*/
void swap(int* a, int* b) {
    int t = *a;
    *a = *b;
    *b = t;
}

int partition(int arr[], int low, int high) {
    int pivot = arr[high];

    int i = (low - 1); 

    for (int j = low; j <= high - 1; j++) {
        if (arr[j] <= pivot) {
            i++;    
            swap(&arr[i], &arr[j]); 
        }
    }
    swap(&arr[i + 1], &arr[high]);

    return (i + 1);
}

void quicksort_recursive(int arr[], int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);
        quicksort_recursive(arr, low, pi - 1);
        quicksort_recursive(arr, pi + 1, high);
    }
}

/*
 * 다음 quicksort 함수를 사용하면 됨
 * 길이가 len인 배열 arr을 오름차순으로 정렬하는 함수
 */
void quicksort(int arr[], int len) {
    if (len > 0) {
        quicksort_recursive(arr, 0, len - 1);
    }
}

int s[100000];

void Merge(int* arr, int left, int mid, int right)
{
    int i, j, k, l;
    i = left; j = mid + 1; k = left;
    
    // 리스트 합병
    while (i <= mid && j <= right) {
        if (arr[i] <= arr[j]) {
            s[k++] = arr[i++];
        }
        
        else {
            s[k++] = arr[j++];
        }
    }
    
    //배열에 남은 원소 일괄 삽입
    if (i > mid) {
        for (l = j; l <= right; l++) {
            s[k++] = arr[l];
        }
    }
    else {
        for (l = i; l <= mid; l++) {
            s[k++] = arr[l];
        }
    }
    
    for (l = left; l <= right; l++) {
        arr[l] = s[l];
    }
}
void MergeSort(int* arr, int left, int right)
{
    int mid = 0;
    if (left < right) {
        mid = (left + right) / 2;
        MergeSort(arr, left, mid);
        MergeSort(arr, mid + 1, right);
        Merge(arr, left, mid, right);
    }
}

int main()
{
    int n = 0;
    int a[100000] = {0};
    int m = 0;
    int x[100000] = {0};
    // n 읽기
    scanf("%d", &n);
    // n개의 정수 a 읽기
    for(int i = 0; i < n ; i++){
        scanf("%d", &a[i]);
    }
    // 오름차순으로 정렬
    MergeSort(a,0,n-1);
    // m 읽기
    scanf("%d", &m);
    // m개의 정수 x 읽기
    for(int i = 0; i < m; i++){
        scanf("%d", &x[i]);
        // 이진탐색
        int left = 0;
        int right = n - 1;
        int found = 0; // 찾았는지 여부를 나타내는 변수
        while(left <= right){
            int mid = (left + right) / 2;
            if(a[mid] == x[i]){
                found = 1; // 찾음
                break;
            }
            else if(a[mid] < x[i]){
                left = mid + 1;
            }
            else{
                right = mid - 1;
            }
        }
        // 결과 출력
        printf("%d\n", found);
    }
    return 0;
}
