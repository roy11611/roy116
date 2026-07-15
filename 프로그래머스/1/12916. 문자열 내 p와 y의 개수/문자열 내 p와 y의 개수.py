def solution(s):
    # 문자열을 소문자로 바꾼 뒤(lower), 'p'의 개수를 센 결과(count)와 
    # 'y'의 개수를 센 결과가 같은지(==) 한 번에 확인
    return s.lower().count('p') == s.lower().count('y')