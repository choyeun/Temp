//
// Created by AYU on 24. 6. 5.
//
#pragma warning(disable:4996)
#include <stdio.h>

struct book {
	char title[30];
	char author[30];
	int price;
};

void main(void) {
	struct book my_book = { "HTML�� CSS", "ȫ�浿", 28000 };
	struct book java_book = { "Java language", "", 30000 };

	printf("\nù ��° å�� ������ \'%s\' �̰�, ���ڴ� \'%s\' �̸�, ������ %d ���Դϴ�.\n",
		my_book.title, my_book.author, my_book.price);
	printf("\n�� ��° å�� ������ \'%s\' �̰�, ���ڴ� \'%s\' �̸�, ������ %d ���Դϴ�.\n",
		java_book.title, java_book.author, java_book.price);
}
