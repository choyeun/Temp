//
// Created by AYU on 24. 6. 5.
//
#pragma warning(disable:4996)
#include <stdio.h>
#include <string.h>

struct student {
	int number;
	char name[10];
	double grade;
};

void main() {
	struct student X;

	printf("1.�й��� �Է��Ͻÿ�(����): ");
	scanf("%d", &X.number);

	printf("2.�̸��� �Է��Ͻÿ�(���ڿ�): ");
	scanf("%s", X.name);

	printf("3.������ �Է��Ͻÿ�(�Ǽ�): ");
	scanf("%lf", &X.grade);

	printf("1.�й�: %d\n", X.number);
	printf("2.�̸�: %s\n", X.name);
	printf("3.����: %f\n", X.grade);
}
