//
// Created by AYU on 24. 6. 11.
//
#pragma warning(disable:4996)
#include <stdio.h>

void main() {
    FILE* fp = NULL;
    printf("\n�� File03 - ���� ���� ��/����ϱ� \n\n");
    fp = fopen("c:/temp/newbongman.txt", "r");

    if (fp == NULL) {
        printf("\t���� ���� ����\n");
    }
    else {
        printf("\t���� ���� ����\n");
    }
    char C;
    printf("\n-----\n");
    while ((C = fgetc(fp)) != EOF) {
        putchar(C);
    }
    printf("\n-----\n");

    fclose(fp);
    printf("\n\n�� ������(2024E7109)-%s\n\n", __TIMESTAMP__);
}
