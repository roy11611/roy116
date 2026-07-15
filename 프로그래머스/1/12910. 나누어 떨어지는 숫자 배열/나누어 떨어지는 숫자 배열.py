def solution(arr, divisor):
    # arr에서 하나씩 꺼낸 x가 divisor로 나누어 떨어질 때만 리스트로 만듦
    answer = [x for x in arr if x % divisor == 0]
    
    # 만약 answer에 아무것도 없다면 [-1]을 돌려주고 
    # 무언가 있다면 sorted() 함수를 이용해 정렬한 결과를 돌려줌
    if len(answer) == 0:
        return [-1]
    
    return sorted(answer)