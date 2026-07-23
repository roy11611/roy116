def solution(price, money, count):
    # 1. 등차수열의 합 공식을 이용해 총 요금을 한 번에 계산합니다.
    # 1부터 count까지의 합은 (count * (count + 1) / 2) 입니다.
    total_cost = price * (count * (count + 1) // 2)
    
    # 2. 파이썬의 max 함수를 이용해, 모자란 금액과 0 중 더 큰 값을 돌려줍니다.
    return max(0, total_cost - money)