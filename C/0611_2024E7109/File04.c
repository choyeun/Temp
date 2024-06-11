//
// Created by AYU on 24. 6. 11.
//
#pragma warning(disable:4996)
#include <stdio.h>

void main() {
    FILE* fp = NULL;
    printf("\n▷ File04 - 문자열 단위 처리하기 \n\n");

    printf("\n\tStep#1 - 문자열 단위 쓰기 \n\n");
    fp = fopen("c:/temp/newbongman.txt", "w");

    if (fp == NULL) {
        printf("\t\t파일 열기 실패\n");
    }
    else {
        printf("\t\t파일 열기 성공\n");
    }
    fputs("유수봉\n", fp);
    fputs("유수봉 만세\n", fp);
    fputs("유수봉 만만세 !!\n", fp);

    fclose(fp);

    printf("\n\tStep#2 - 문자열 단위 읽기 \n");
    fp = fopen("c:/temp/newbongman.txt", "r");
    char line[100], * S;
    printf("\n\t\t-----\n");
    while ((S = fgets(line, 100, fp)) != NULL) {
        printf("\n\t\t%s", line);
    }
    printf("\n\t\t-----\n");

    fclose(fp);
    printf("\n\n▷ 김인찬(2024E7109)-%s\n\n", __TIMESTAMP__);
}
