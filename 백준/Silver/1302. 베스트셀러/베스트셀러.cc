#include <stdio.h>
#include <string.h>

void SelectionSort(char str[][51], int n);
void Titlecount(char str[][51], int n, char* result);

int main()
{   
    int n = 0;
    char str[1000][51];
    char result[51];
   

    scanf("%d", &n);

    for(int i = 0; i < n; i++)
    {
       scanf("%s", str[i]);
    }
    
    SelectionSort(str, n);
    Titlecount(str, n, result);
    printf("%s\n", result);

    return 0;
}

    void SelectionSort(char str[][51], int n){
        
        int smallest = 0;
        int current = 0;
        char temp[51]; 
        //선택정렬 사용


        for(current = 0; current < n - 1; current++){
            smallest = current;
             for(int i = current + 1; i < n; i++){
                //사전순으로 가장 작은 문자열 찾기
                 if(strcmp(str[i], str[smallest]) < 0)
                        {
                            smallest = i;
                        }
                    }
                    //찾은 문자열과 현재 위치 문자열 교체
            if(smallest != current){           
                strcpy(temp, str[current]);
                strcpy(str[current], str[smallest]);
                strcpy(str[smallest], temp);            
            }
        }        
    }

    //빈도수 세기
    void Titlecount(char str[][51], int n, char* result){
         int max_count = 1;
    int current_count = 1;
    char title[51];
    strcpy(title, str[0]);

    //정렬된 배열에서 빈도수 세기
    for(int i = 1; i < n; i++)
    {
        //이전 문자열과 같으면 카운트 증가
        if(strcmp(str[i], str[i - 1]) == 0){
            current_count++;
            //마지막 문자열일 때 최대값 비교
        } else {
            if (current_count > max_count){
                max_count = current_count;
                strcpy(title, str[i-1]);
            }
            current_count = 1;
        }
    }
//마지막 문자열이 가장 빈도수가 높을 때
    if(current_count > max_count){
        strcpy(title, str[n-1]);
    }
    
    strcpy(result, title);
    }