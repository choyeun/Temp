#pragma warning(disable:4996)
#include <stdio.h>

struct student {
	int number;
	char name[20];
	double grade;
};

void  main() {
	struct student s = { 202401001, "ȫ�浿", 4.3 };
	struct student* p;

	p = &s;
	printf("\n\n�����͸� ���� ����ü ����\n\n");
	printf("1.�й�=%d �̸�=%s ����=%f \n", s.number, s.name, s.grade);
	printf("2.�й�=%d �̸�=%s ����=%f \n", (*p).number, (*p).name, (*p).grade);
	printf("3.�й�=%d �̸�=%s ����=%f \n", p->number, p->name, p->grade);
	printf("\n\n");
}
