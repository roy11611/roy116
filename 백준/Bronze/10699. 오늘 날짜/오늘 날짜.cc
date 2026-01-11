#include <stdio.h>
#include <time.h>

int main()
{   
    //현재 시간 가져오기
    time_t now = time(NULL);

    //시간 변환
    struct tm *t = localtime(&now);

    //결과를 담을 문자열
    char date_str[128];

    //날짜 변환 후 저장
    sprintf(date_str, "%d-%02d-%02d", t->tm_year + 1900, t -> tm_mon + 1, t -> tm_mday);

    //출력
    printf("%s", date_str);
    
    return 0;
}