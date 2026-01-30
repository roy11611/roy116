#include <stdio.h>
    int main()
    {   
        //알파벳 대소문자 입력
        //이 단어에 가장 많이 사용된 알파벳 찾기
        //단. 대소문자 구분X, 가장 많이 사용된 알파벳이 여러개일 경우 ? 출력
        char word[1000000];
        int alphabet_count[26] = {0}; //알파벳 개수 저장 배열
        scanf("%s", word);
        for(int i = 0; word[i] != '\0'; i++){
            char ch = word[i];
            if(ch >= 'a' && ch <= 'z'){
                alphabet_count[ch - 'a']++;
            } else if(ch >= 'A' && ch <= 'Z'){
                alphabet_count[ch - 'A']++;
            }
        }
        int max_count = 0;
        char result_char = '?';
        for(int i = 0; i < 26; i++){
            if(alphabet_count[i] > max_count){
                max_count = alphabet_count[i];
                result_char = 'A' + i;
            } else if(alphabet_count[i] == max_count && max_count != 0){
                result_char = '?';
            }
        }
        printf("%c\n", result_char);
        

        return 0;
    }