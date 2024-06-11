//
// Created by AYU on 24. 6. 11.
//
#pragma warning(disable:4996)
#include <stdio.h>

void main() {
    FILE* fp = NULL;
    printf("\n▷ File05 - 형식화된 데이터 파일 입/출력하기 \n\n");

    fp = fopen("c:/temp/newbongman.txt", "w");

    if (fp == NULL) {
        printf("\t\t파일 열기 실패\n");
    }
    else {
        printf("\t\t파일 열기 성공\n");
    }

    printf("\n\tStep#1 - 형식화된 문자열 쓰기 \n\n");
    fprintf(fp, " 202401001 유수봉 77");
    fprintf(fp, " 202502002 나가요 88");
    fprintf(fp, " 202603003 어서요 99");

    fclose(fp);

    printf("\n\tStep#2 - 형식화된 문자열 읽기 \n");
    fp = fopen("c:/temp/newbongman.txt", "r");
    char SID[10], NAME[7];
    int SCORE;
    printf("\n\t\t-----\n");
    while (!feof(fp)) {
        fscanf(fp, "%s %s %d ", SID, NAME, &SCORE);
        printf("%s %s %d\n", SID, NAME, SCORE);
    }
    printf("\n\t\t-----\n");

    fclose(fp);

    printf("\n\n▷ 김인찬(2024E7109)-%s\n\n", __TIMESTAMP__);
}
