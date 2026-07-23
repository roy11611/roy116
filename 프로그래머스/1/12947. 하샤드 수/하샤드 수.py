def solution(x):
    # 1~2단계: x를 문자열(str)로 바꾸어 한 글자씩 분리한 뒤, 
    # 다시 정수(int)로 변환하여 그 합(sum)을 구합니다.
    digit_sum = sum(int(char) for char in str(x))
    
    # 3단계: 원래 숫자 x를 자릿수의 합으로 나눈 나머지가 0인지 확인합니다.
    return x % digit_sum == 0