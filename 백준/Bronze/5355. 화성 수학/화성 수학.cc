#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        double num;
        char op;

        // 1. 처음 숫자를 입력받음
        scanf("%lf", &num);

        // 2. 줄바꿈(\n)이 나오기 전까지 연산자들을 하나씩 읽음
        while (scanf("%c", &op) != EOF && op != '\n') {
            if (op == '@') {
                num *= 3;
            } else if (op == '%') {
                num += 5;
            } else if (op == '#') {
                num -= 7;
            }
        }

        // 3. 소수점 둘째 자리까지 출력
        printf("%.2f\n", num);
    }

    return 0;
}