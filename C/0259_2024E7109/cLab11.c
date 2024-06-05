#pragma warning(disable : 4996)
#include <stdio.h>

void main(void)
{

    int num;
    char name[10];

    printf("학번을 입력하세요 : ");
    scanf("%d", &num);

    printf("이름을 입력하세요 : ");
    fgets(name, sizeof(name), stdin);

    printf("학번 : %d\n", num);
    printf("이름 : %s\n", name);
}