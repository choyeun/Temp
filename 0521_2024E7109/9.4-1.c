// 2024E7109 김인찬
#include <stdio.h>

int main(void)
{
    int i, sum, n;

    printf("1부터 n까지의 정수의 합을 계산합니다. n을 입력하세요: ");
    scanf("%d", &n);

    sum = 0;
    for (i = 1; i <= n; i++)
        sum += i; // sum = sum + i;와 같음

    printf("1부터 %d까지의 정수의 합= %d\n", n, sum);

    return 0;
}
