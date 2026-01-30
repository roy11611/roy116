#include <stdio.h>
    int main()
    {   
        //출발역에서 종착역까지 가는 도중 기차안에 사람이 가장 많을떄의 사람 수 구하기
        // 기차는 역 번호 순서대로 운행
        // 출발역에서 내린 사람의 수와 종착역에서 탄 사람의 수는 0
        //각 역에서 현재 기차에 있는 사람보다 더 많은 사람이 내리는 경우는 없다.
        //기차의 정원 은 최대 10000명, 초과하는 경우는 없다
        // 4개의 역에 대해 각 역에서 내린 사람 수와 탄 사람 수 입력
        int max_people = 0; //기차에 있는 사람 수의 최댓값
        int current_people = 0; //현재 기차에 있는 사람 수
        for(int i = 0; i < 4; i++){
            int out_people, in_people;
            scanf("%d %d", &out_people, &in_people);
            current_people = current_people - out_people + in_people;
            if(current_people > max_people){
                max_people = current_people;
            }
        }
        printf("%d\n", max_people);
        

        return 0;
    }