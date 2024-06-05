#include <stdio.h>
void main(void)
{
    printf("cLab_00.c : 문자열\n\n");

    int N;
    char str[] = "abc";

    N = 0;
    while (str[N] != '\0')
    {
        printf("%c - %d - %s \n", str[N], str[N], str);
        N++;
    }
    printf("\n작성자 : 김인찬(2024E7109)\n\n");
}