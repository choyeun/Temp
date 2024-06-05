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
	struct date* dob;  // <==  여기
};

void main() {
	struct date d = { 5, 31, 2002 };
	struct student s = { 202401001, "Kim", 4.3 };

	s.dob = &d;

	printf("학번: %d\n", s.number);
	printf("이름: %s\n", s.name);
	printf("학점: %f\n", s.grade);
	printf("생년월일: %d년 %d월 %d일\n",
		s.dob->year, s.dob->month, s.dob->day);
}
