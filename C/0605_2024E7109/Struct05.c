#pragma warning(disable:4996)
#include <stdio.h>

struct point {
	int x;
	int y;
};

void main() {
	struct point p1 = { 10, 20 };
	struct point p2 = { 30, 40 };

	printf("\n\n����ü ������ ���԰� ��\n\n");

	p2 = p1;			// ���� ����
	//if (p1 == p2) 		// �� ������ ����!!
	{
		printf("1.p1�� p2�� �����ϴ�.");
	}

	if ((p1.x == p2.x) && (p1.y == p2.y)) {	// �ùٸ� ��
		printf("2.p1�� p2�� �����ϴ�.");
	}
}
