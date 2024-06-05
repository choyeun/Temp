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

	printf("1.학번을 입력하시오(정수): ");
	scanf("%d", &X.number);

	printf("2.이름을 입력하시오(문자열): ");
	scanf("%s", X.name);

	printf("3.학점을 입력하시오(실수): ");
	scanf("%lf", &X.grade);

	printf("1.학번: %d\n", X.number);
	printf("2.이름: %s\n", X.name);
	printf("3.학점: %f\n", X.grade);
}
