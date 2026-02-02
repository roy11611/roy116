#include <stdio.h>
#include <string.h>

int main()
{
   //카이사르 암호 문제
   //카이사르 암호는 알파벳을 3개씩 건너뛰는 방식
    //예 'A'는 'D'로, 'X'는 'A'로 변환
   // 카이사르에 암호 문자 입력
   // 암호 해독 후 원래 문자 출력
    char encrypted[1000];
    scanf("%s", encrypted);
    char decrypted[1000];
    for(int i = 0; encrypted[i] != '\0'; i++){
        char ch = encrypted[i];
        if(ch >= 'A' && ch <= 'Z'){
            decrypted[i] = ((ch - 'A' + 23) % 26) + 'A'; //3글자 뒤로 이동
        } else {
            decrypted[i] = ch; //알파벳이 아니면 그대로
        }
    }
    decrypted[strlen(encrypted)] = '\0'; //문자열 종료 문자 추가
    printf("%s\n", decrypted);
    return 0;
}