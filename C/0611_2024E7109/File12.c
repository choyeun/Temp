//
// Created by AYU on 24. 6. 11.
//
#pragma warning(disable:4996)
#include <stdio.h>

void main() {

    printf("\n�� File00 - ��Ƽ���⽺ ������ ����ϱ�-1 \n\n");


    FILE* ���� = fopen("c:/temp/jobs.txt", "r");
    char ����;

    int ���� = 0;
    int ��ĭ = 0;
    int ��ħǥ = 0;
    int �ٹٲ� = 0;

    if (���� == NULL) {
        printf("���� ���� ����\n");
    }
    else {
        while ((���� = fgetc(����)) != EOF) {
            printf("%c", ����);
            ����++;
            if (���� == ' ') { ��ĭ = ��ĭ + 1; }
            if (���� == '.') { ��ħǥ++; }
            if (���� == '\n') { �ٹٲ�++; }
        }
    }
    printf("\n\n<< ������ �м� >>");
    printf("\n-----------------");
    printf("\n1. ���ڼ� : %5d", ����);
    printf("\n2. �ܾ�� : %5d", ��ĭ);
    printf("\n3. ����� : %5d", ��ħǥ);
    printf("\n4. �ٹٲ� : %5d", �ٹٲ�);
    printf("\n-----------------");

    fclose(����);

    printf("\n\n�� ������(2024E7109)-%s\n\n", __TIMESTAMP__);
}
