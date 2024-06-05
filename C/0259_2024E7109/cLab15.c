#pragma warning(disable : 4996)
#include <stdio.h>

void main(void)
{
    printf("\ncLab_00.c : 다양한 데이터의 입/출력\n");

    char CHAR;
    char STRING[51] = "";
    int INT;
    float FLOAT;

    printf("\n\n\t1.문자 \t\t입력 : \tscanf(char) => ");
    scanf("%c", &CHAR);
    printf("\t\t\t출력 : printf(char) => ");
    printf("%c", CHAR);
    while (getchar() != '\n')
        ;

    printf("\n\n\t2.문자열 \t입력 : \tscanf(string) => ");
    scanf("%s", STRING);
    printf("\t\t\t출력 : printf(string) => ");
    printf("%s", STRING);
    while (getchar() != '\n')
        ;

    printf("\n\n\t3.정수 \t\t입력 : \tscanf(int) => ");
    scanf("%d", &INT);
    printf("\t\t\t출력 : printf(int) => ");
    printf("%d", INT);
    while (getchar() != '\n')
        ;

    printf("\n\n\t4.실수 \t\t입력 : \tscanf(float) => ");
    scanf("%f", &FLOAT);
    printf("\t\t\t출력 : printf(float) => ");
    printf("%f", FLOAT);
    while (getchar() != '\n')
        ;

    printf("\n\n\t5.한줄 \t\t입력 : \tgets(string) => ");
    gets(STRING, 51);
    printf("\t\t\t출력 : puts(string) => ");
    puts(STRING);

    printf("\n작성자 : 김인찬(2024E7109)\n\n");
}