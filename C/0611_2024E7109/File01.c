//
// Created by AYU on 24. 6. 11.
//
#pragma warning(disable:4996)
#include <stdio.h>

void main() {
    FILE* fp = NULL;
    printf("\n▷ File01 - 파일 열기 \n\n");
    fp = fopen("c:/temp/newbongman.txt", "w");

    if (fp == NULL) {
        printf("\t파일 열기 실패\n");
    }
    else {
        printf("\t파일 열기 성공\n");
    }

    fclose(fp);

    printf("\n\n▷ 김인찬(2024E7109)-%s\n\n", __TIMESTAMP__);
}
