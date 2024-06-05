//
// Created by AYU on 24. 6. 5.
//
#pragma warning(disable:4996)
#include <stdio.h>
#include <string.h>

struct student {
	int number;
	char name[20];
	double grade;
};
struct student create() {
	struct student s;
	s.number = 3;
	strcpy(s.name, "À¯¼öºÀ");
	s.grade = 4.1;
	return s;
}
void main() {
	struct student A;
	struct student *pA;
	A = create();
	pA = &A;
	printf("\n 1st A=%p pA=%p", &A, pA);
	A = create();
	pA = &A;
	printf("\n 2nd A=%p pA=%p", &A, pA);
	A = create();
	pA = &A;
	printf("\n 3rd A=%p pA=%p", &A, pA);

}
