def solution(s):
    # 길이에 대한 조건(4, 6 중 하나)과 숫자로만 이루어졌는지(isdigit)를 
    # 'and'로 묶어서 두 조건이 모두 참일 때만 True가 나오게 합니다.
    return (len(s) in (4, 6)) and s.isdigit()