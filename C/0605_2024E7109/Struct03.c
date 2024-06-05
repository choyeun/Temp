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
	struct book my_book = { "HTML과 CSS", "홍길동", 28000 };
	struct book java_book = { "Java language", "", 30000 };

	printf("\n첫 번째 책의 제목은 \'%s\' 이고, 저자는 \'%s\' 이며, 가격은 %d 원입니다.\n",
		my_book.title, my_book.author, my_book.price);
	printf("\n두 번째 책의 제목은 \'%s\' 이고, 저자는 \'%s\' 이며, 가격은 %d 원입니다.\n",
		java_book.title, java_book.author, java_book.price);
}
