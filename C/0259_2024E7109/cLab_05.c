#include <stdio.h>
void main(void)
{
    printf("cLab_00.c : 문자열의 길이\n\n");

    char str[30] = "C language is easy";
    int N = 0;

    while (str[N] != 0)
    {
        N++;
    }

    printf("문자열\"%s\"의 길이는 %d 글자입니다.\n", str, N);

    printf("\n작성자 : 김인찬(2024E7109)\n\n");
}