//
// Created by AYU on 24. 6. 5.
//
#pragma warning(disable:4996)
#include <stdio.h>

struct date {
	int month;
	int day;
	int year;
};

struct student {
	int number;
	char name[20];
	double grade;
	struct date* dob;  // <==  ����
};

void main() {
	struct date d = { 5, 31, 2002 };
	struct student s = { 202401001, "Kim", 4.3 };

	s.dob = &d;

	printf("�й�: %d\n", s.number);
	printf("�̸�: %s\n", s.name);
	printf("����: %f\n", s.grade);
	printf("�������: %d�� %d�� %d��\n",
		s.dob->year, s.dob->month, s.dob->day);
}
