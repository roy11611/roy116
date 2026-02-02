#include <stdio.h>
int main()
{   
    //다이얼 문제
    //알파벳 대문자 입력
    //각 알파벳에 해당하는 다이얼 번호로 걸기 위해 걸리는 시간 계산
    //다이얼 번호는 다음과 같음
    //1: 없음
    //2: ABC
    //3: DEF
    //4: GHI
    //5: JKL
    //6: MNO
    //7: PQRS
    //8: TUV
    //9: WXYZ
    //0: 없음
    //다이얼 번호를 누르기 위해 걸리는 시간은 다이얼 번호 +1초
    char word[100];
    scanf("%s", word);
    int total_time = 0;
    for(int i = 0; word[i] != '\0'; i++){
        char ch = word[i];
        if(ch >= 'A' && ch <= 'C'){
            total_time += 3; //2 + 1
        } else if(ch >= 'D' && ch <= 'F'){
            total_time += 4; //3 + 1
        } else if(ch >= 'G' && ch <= 'I'){
            total_time += 5; //4 + 1
        } else if(ch >= 'J' && ch <= 'L'){
            total_time += 6; //5 + 1
        } else if(ch >= 'M' && ch <= 'O'){
            total_time += 7; //6 + 1
        } else if(ch >= 'P' && ch <= 'S'){
            total_time += 8; //7 + 1
        } else if(ch >= 'T' && ch <= 'V'){
            total_time += 9; //8 + 1
        } else if(ch >= 'W' && ch <= 'Z'){
            total_time += 10; //9 + 1
        }
    }
    printf("%d\n", total_time);
    

    return 0;
}