#pragma warning(disable : 4996)
#include <stdio.h>

void main(void)
{
    printf("\ncLab_00.c : getch, putch \n");

    int ch; // 정수형에 주의
    int cnt = 0;

    printf("\n\n\t 문자열을 입력하시오 : ");

    while ((ch = _getch()) != 'q')
    {
        printf("\t[%2d] - ", cnt++);
        _putch(ch);
        printf(" -> ASCII Code=%3d \n", ch);
    }
    printf("\n작성자 : 김인찬(2024E7109)\n\n");
}