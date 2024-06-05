#include <stdio.h>
void main(void)
{
    printf("cLab_00.c : 문자 배열\n\n");

    char str1[6] = "Seoul";
    char str2[3] = {'i', 's', '\0'};
    char str3[] = "the capital city of Korea.";
    printf("%s %s %s\n", str1, str2, str3);

    printf("\n작성자 : 김인찬(2024E7109)\n\n");
}