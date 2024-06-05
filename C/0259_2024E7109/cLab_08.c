#define _CRT_SECURE_NO_WARNINGS // strcpy 보안 경고로 인한 컴파일 에러 방지
#include <stdio.h>
#include <string.h> // strcpy 함수가 정의된 헤더 파일
#include <stdlib.h> // malloc, free 함수가 선언된 헤더 파일

void main(void)
{
    printf("cLab_00.c : 문자 상수로의 복사(strcpy)\n");

    char *s1 = "hello";                   // 문자열 포인터
    char *s2 = malloc(sizeof(char) * 10); // char 10개 크기만큼 동적 메모리 할당

    printf("\n복사 전\n");
    printf("\tS1 = %s\n", s1); // Hello
    printf("\tS2 = %s\n", s2); // Hello

    strcpy(s2, s1); // s1의 문자열을 s2로 복사
    printf("\n복사 후\n");
    printf("\tS1 = %s\n", s1); // Hello
    printf("\tS2 = %s\n", s2); // Hello

    free(s2); // 동적 메모리 해제

    printf("\n작성자 : 김인찬(2024E7109)\n\n");
}