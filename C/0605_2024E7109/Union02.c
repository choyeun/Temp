//
// Created by AYU on 24. 6. 5.
//
#pragma warning(disable:4996)
#include <stdio.h>
#include <string.h>

#define SID_NUM 1	// �й�
#define REG_NUM 2   // �ֹι�ȣ

struct student {
	int type;

	union {
		int SID;     	// �й�
		char RID[15];	// �ֹι�ȣ
	} id;

	char NAME[20];
};
void print(struct student s)
{
	switch (s.type)
	{
	case SID_NUM:	// �й��̸�
		printf("\t\t���й� : %d\n", s.id.SID);
		printf("\t\t���̸� : %s\n", s.NAME);
		break;

	case REG_NUM:	// �ֹι�ȣ��
		printf("\t\t���ֹι�ȣ : %s\n", s.id.RID);
		printf("\t\t���̸�: %s\n", s.NAME);
		break;

	default:
		printf("\t\t��Ÿ�Կ���\n");
		break;
	}
}
void main() {
	struct student s1, s2;

	printf("\n\n����ü(union) - 2\n\n");

	printf("\n\n\t1.Ÿ���� �л��� ���\n");
	s1.type = SID_NUM;
	s1.id.SID = 202001234;
	strcpy(s1.NAME, "������");

	print(s1);


	printf("\n\n\t2.Ÿ���� �ֹ��� ���\n");
	s2.type = REG_NUM;
	strcpy(s2.id.RID, "990101 - 1020304");
	strcpy(s2.NAME, "������");

	print(s2);

	printf("\n\n\t���е���...\n");
}
