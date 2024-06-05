#include <stdio.h>

int main()
{
    int x, y, r;
    printf("두 정수를 입력하세요: ");
    scanf("%d %d", &x, &y);

    while (y != 0)
    {
        r = x % y;
        x = y;
        y = r;
    }

    printf("최대 공약수는 %d입니다.\n", x);

    return 0;
}
