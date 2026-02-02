#include <stdio.h>

    int main()
    {
        //마을의 수 n 입력
        //i번째 마을과 i+1번째 마을의 이동비용 n개 입력
            //n번째 i는 n번째 마을과 1번째 마을의 이동비용
        //모든 마을을 관광하기 위한 최소 이동비용 계산
            //임의의 마을 a에서 b로 이동하기 위해선 왼쪽 또는 오른쪽만 이동 가능
            // 그외의 길 이동 불가
            //각 마을을 한 번 이상 방문해야 함
        int n;
        scanf("%d", &n);
        int costs[1000000];
        for(int i = 0; i < n; i++){
            scanf("%d", &costs[i]);
        }
        int total_cost = 0;
        for(int i = 0; i < n; i++){
            total_cost += costs[i];
        }
        int min_cost = total_cost;
        for(int i = 0; i < n; i++){
            int cost_if_skip = total_cost - costs[i];
            if(cost_if_skip < min_cost){
                min_cost = cost_if_skip;
            }
        }
        printf("%d\n", min_cost);
        
        return 0;
    }