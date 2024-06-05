//
// Created by AYU on 24. 6. 5.
//
#pragma warning(disable:4996)
#include <stdio.h>
#include <string.h>

#define SID_NUM 1	// 학번
#define REG_NUM 2   // 주민번호

struct student {
	int type;

	union {
		int SID;     	// 학번
		char RID[15];	// 주민번호
	} id;

	char NAME[20];
};
void print(struct student s)
{
	switch (s.type)
	{
	case SID_NUM:	// 학번이면
		printf("\t\t▶학번 : %d\n", s.id.SID);
		printf("\t\t▶이름 : %s\n", s.NAME);
		break;

	case REG_NUM:	// 주민번호면
		printf("\t\t▶주민번호 : %s\n", s.id.RID);
		printf("\t\t▶이름: %s\n", s.NAME);
		break;

	default:
		printf("\t\t▶타입오류\n");
		break;
	}
}
void main() {
	struct student s1, s2;

	printf("\n\n공용체(union) - 2\n\n");

	printf("\n\n\t1.타입이 학생인 경우\n");
	s1.type = SID_NUM;
	s1.id.SID = 202001234;
	strcpy(s1.NAME, "뉴봉만");

	print(s1);


	printf("\n\n\t2.타입이 주민인 경우\n");
	s2.type = REG_NUM;
	strcpy(s2.id.RID, "990101 - 1020304");
	strcpy(s2.NAME, "유수봉");

	print(s2);

	printf("\n\n\t구분되죠...\n");
}
