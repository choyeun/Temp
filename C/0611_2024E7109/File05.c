//
// Created by AYU on 24. 6. 11.
//
#pragma warning(disable:4996)
#include <stdio.h>

void main() {
    FILE* fp = NULL;
    printf("\n�� File05 - ����ȭ�� ������ ���� ��/����ϱ� \n\n");

    fp = fopen("c:/temp/newbongman.txt", "w");

    if (fp == NULL) {
        printf("\t\t���� ���� ����\n");
    }
    else {
        printf("\t\t���� ���� ����\n");
    }

    printf("\n\tStep#1 - ����ȭ�� ���ڿ� ���� \n\n");
    fprintf(fp, " 202401001 ������ 77");
    fprintf(fp, " 202502002 ������ 88");
    fprintf(fp, " 202603003 ��� 99");

    fclose(fp);

    printf("\n\tStep#2 - ����ȭ�� ���ڿ� �б� \n");
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

    printf("\n\n�� ������(2024E7109)-%s\n\n", __TIMESTAMP__);
}
