//
// Created by AYU on 24. 6. 11.
//
#pragma warning(disable:4996)
#include <stdio.h>

void main() {
    FILE* fp = NULL;
    fp = fopen("c:/temp/newbongman.txt", "w");

    if (fp == NULL) {
        printf("\t\t���� ���� ����\n");
    }

    for (int N = 1; N < 10; N++) {
        fprintf(fp, " %d \n", N);
        printf(" %d \n", N);
    }

    fclose(fp);

    printf("\n\n�� ������(2024E7109)-%s\n\n", __TIMESTAMP__);
}
