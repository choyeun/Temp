#pragma warning(disable : 4996)
#include <stdio.h>

void main(void)
{
    printf("\n\ncLab_00.c : gets_s, puts \n");

    char name[100];
    char address[100];

    printf("\n문자열 입력 : \n\n");
    printf("\t1. 이름을 입력하시오: ");
    gets_s(name, 100);
    printf("\t2. 주소를 입력하시오: ");
    gets_s(address, 100);

    printf("\n입력값 확인 : \n\n");
    puts("\t- 이름 : ");
    puts(name);
    puts("\t- 주소 : ");
    puts(address);

    printf("\n작성자 : 김인찬(2024E7109)\n\n");
}