#include <stdio.h>
void main(void)
{
    printf("cLab_00.c : ASCII 문자 출력하기\n\n");
    for (int N = 0; N < 128; N++)
    {
        printf("\t[%3d] - %c (0x%x)\n", N, N, N);
    }
    printf("\n작성자 : 김인찬(2024E7109)\n\n");
}
