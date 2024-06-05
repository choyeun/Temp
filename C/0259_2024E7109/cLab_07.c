#pragma warning(disable : 4996)
#include <stdio.h>
#include <string.h>
#define SIZE 40

void main(void)
{
    printf("cLab_00.c : 문자열의 복사(strcpy)\n");

    char source[SIZE] = "This is the source string";
    char destination[SIZE] = "And this is the destination string";
    char *return_string;

    printf("\n\n처리 전");
    printf("\n\tsource = \"%s\"\n", source);
    printf("\n\tdestination = \"%s\"\n", destination);
    return_string = strcpy(destination, source);
    printf("\n\n처리 후");
    printf("\n\tsource = \"%s\"\n", source);
    printf("\n\tdestination = \"%s\"\n", destination);

    printf("\n작성자 : 김인찬(2024E7109)\n\n");
}