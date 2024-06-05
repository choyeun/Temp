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
	struct student s;

	s.number = 202401001;
	strcpy(s.name, "유수봉");
	s.grade = 4.3;

	printf("1.학번: %d\n", s.number);
	printf("2.이름: %s\n", s.name);
	printf("3.학점: %f\n", s.grade);
}
