//
// Created by AYU on 24. 6. 11.
//
#pragma warning(disable:4996)
#include <stdio.h>

void main() {
    FILE* fp = NULL;
    printf("\n�� File01 - ���� ���� \n\n");
    fp = fopen("c:/temp/newbongman.txt", "w");

    if (fp == NULL) {
        printf("\t���� ���� ����\n");
    }
    else {
        printf("\t���� ���� ����\n");
    }

    fclose(fp);

    printf("\n\n�� ������(2024E7109)-%s\n\n", __TIMESTAMP__);
}
