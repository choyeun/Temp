#include <stdio.h>
void main(void)
{
    printf("cLab_00.c : 문자 배열과 문자 상수\n\n");

    char A[30] = "C language is easy";
    char *P = "C language is hard";

    printf("A[30]=%s \n", A);
    printf("\tA[0]=%c \n", A[0]);
    printf("\tA[1]=%c \n", A[1]);
    printf("\tA[2]=%c \n", A[2]);

    printf("P=%s \n", P);
    printf("\t*(P+0)=%c \n", *(P + 0));
    printf("\t*(P+1)=%c \n", *(P + 1));
    printf("\t*(P+2)=%c \n", *(P + 2));

    printf("\n작성자 : 김인찬(2024E7109)\n\n");
}