#pragma warning(disable:4996)
#include <stdio.h>

struct student {
	int number;
	char name[20];
	double grade;
};

void  main() {
	struct student s = { 202401001, "홍길동", 4.3 };
	struct student* p;

	p = &s;
	printf("\n\n포인터를 통한 구조체 참조\n\n");
	printf("1.학번=%d 이름=%s 학점=%f \n", s.number, s.name, s.grade);
	printf("2.학번=%d 이름=%s 학점=%f \n", (*p).number, (*p).name, (*p).grade);
	printf("3.학번=%d 이름=%s 학점=%f \n", p->number, p->name, p->grade);
	printf("\n\n");
}
