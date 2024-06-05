#pragma warning(disable:4996)
#include<stdio.h>
#include<string.h>

struct student {
	int number;
	char name[20];
	double grade;
};

void main() {
	struct student list[3] = {	// 구조체의 배열 선언
		{ 1, "Park", 3.42 },	// 구조체 배열의 초기화
		{ 2, "Kim", 4.31 },
		{ 3, "Lee", 2.98 }
	};
	printf("\nStep#1 \n");
	for (int N = 0; N < 3; N++) {
		printf("\n\t [%d] %d %s %f", N, list[N].number, list[N].name, list[N].grade);
	}

	printf("\n\nStep#2 \n");
	list[2].number = 24;
	strcpy(list[1].name, "유수봉");
	strcpy(list[2].name, "홍길동");
	list[2].grade = 4.3;

	for (int N = 0; N < 3; N++) {
		printf("\n\t [%d] %d %s %f", N, list[N].number, list[N].name, list[N].grade);
	}
	printf("\n\nStep#3 : 열을 맞추어 출력해 봅시다. \n\n");
}
