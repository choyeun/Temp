// 2024E7109 김인찬
#include <stdio.h>
int main(void)
{
    char op;
    int x, y, result;
    printf("수식을 입력하시오");
    printf("(예: 2 + 5) ");
    printf(">>");
    scanf("%d %c %d", &x, &op, &y);
    switch (op)
    {
    case '+':
        result = x + y;
        break;
    default:
        printf("지원되지 않는 연산자입니다. ");
        break;
    }
    printf("%d %c %d = %d ", x, op, y, result);
    return 0;
}