// 2024E7109 김인찬
// 반복을 이용한 팩토리얼 구하기
#include <stdio.h>
int main(void)
{
    long long fact = 1;
    int i, n;
    printf("정수를 입력하시요:");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
        fact = fact * i;
    printf("%d!은 %lld입니다.\n", n, fact);
    return 0;
}