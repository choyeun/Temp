#define _CRT_SECURE_NO_WARNINGS // strcpy 보안 경고로 인한 컴파일 에러 방지
#include <stdio.h>

void main(void)
{
    printf("\ncLab_00.c : 문자 상수의 사용\n\n");

    char *p = "test";
    int n;

    printf("\t1.\'%s\' \tp=%p \n", p, p);
    for (n = 0; n < 5; n++)
    {
        printf("\t\t*(p+%d) => %3d %c\n", n, *(p + n), *(p + n));
    }
    p = "ryusubong";
    printf("\t2.\'%s\' \tp=%p \n", p, p);
    for (n = 0; n < 5; n++)
    {
        printf("\t\t*(p+%d) => %3d %c\n", n, *(p + n), *(p + n));
    }
    p = "#####";
    printf("\t3.\'%s\' \tp=%p \n", p, p);
    for (n = 0; n < 5; n++)
    {
        printf("\t\t*(p+%d) => %3d %c\n", n, *(p + n), *(p + n));
    }

    printf("\n작성자 : 김인찬(2024E7109)\n\n");
}