//
// Created by AYU on 24. 6. 11.
//
#pragma warning(disable:4996)
#include <stdio.h>

void main() {
    FILE* fp = NULL;
    printf("\n�� File09 - ������ ���Ϸ� ����ϱ� \n\n");

    fp = fopen("c:/temp/newbongman.txt", "w");

    if (fp == NULL) {
        printf("\t\t���� ���� ����\n");
    }

    for (int A = 1; A < 10; A++) {
        for (int B = 1; B < 10; B++) {
            fprintf(fp, "\t%2d * %2d = %2d \n", A, B, A * B);
            printf("\t%2d * %2d = %2d \n", A, B, A * B);
        }
        fprintf(fp, "\n");
        printf("\n");
    }
    fclose(fp);
    printf("\n�� ������(202401001)-%s\n\n", __TIMESTAMP__);
}
