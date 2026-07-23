def solution(keymap, targets):
    min_press = {}
    
    # 1. get()과 min()을 활용해 한 줄로 최소 횟수를 업데이트합니다.
    for key in keymap:
        for i, char in enumerate(key):
            # 사전에 char가 없으면 무한대(float('inf'))를 반환하게 하여, 무조건 i+1이 기록되게 합니다.
            min_press[char] = min(min_press.get(char, float('inf')), i + 1)
            
    answer = []
    # 2. try-except 예외 처리를 이용해 더 깔끔하게 계산합니다.
    for target in targets:
        try:
            # 단어의 각 문자 횟수를 사전에 찾아 한 번에 합(sum)합니다.
            answer.append(sum(min_press[char] for char in target))
        # 만약 사전에 없는 문자라 KeyError가 발생하면, 자연스럽게 -1을 담습니다.
        except KeyError:
            answer.append(-1)
            
    return answer