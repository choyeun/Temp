//
// Created by AYU on 24. 6. 11.
//
#pragma warning(disable:4996)
#include <stdio.h>

void main() {
    FILE* fp = NULL;
    printf("\n�� File04 - ���ڿ� ���� ó���ϱ� \n\n");

    printf("\n\tStep#1 - ���ڿ� ���� ���� \n\n");
    fp = fopen("c:/temp/newbongman.txt", "w");

    if (fp == NULL) {
        printf("\t\t���� ���� ����\n");
    }
    else {
        printf("\t\t���� ���� ����\n");
    }
    fputs("������\n", fp);
    fputs("������ ����\n", fp);
    fputs("������ ������ !!\n", fp);

    fclose(fp);

    printf("\n\tStep#2 - ���ڿ� ���� �б� \n");
    fp = fopen("c:/temp/newbongman.txt", "r");
    char line[100], * S;
    printf("\n\t\t-----\n");
    while ((S = fgets(line, 100, fp)) != NULL) {
        printf("\n\t\t%s", line);
    }
    printf("\n\t\t-----\n");

    fclose(fp);
    printf("\n\n�� ������(2024E7109)-%s\n\n", __TIMESTAMP__);
}
