//
// Created by AYU on 24. 6. 5.
//
#pragma warning(disable:4996)
#include <stdio.h>
#include <stdlib.h>

struct point { int x; int y; };
struct rect { struct point p1; struct point p2; };

void main() {
	struct rect R;
	int W, H, area, peri;

	printf("\n\n�簢���� ���� ����ϱ�... \n\n");

	printf("1.���� ����� ��ǥ(x,y)�� �Է��Ͻÿ�.(���� ����): ");
	scanf("%d %d", &R.p1.x, &R.p1.y);

	printf("2.������ �ϴ��� ��ǥ(x,y)�� �Է��Ͻÿ�.(���� ����): ");
	scanf("%d %d", &R.p2.x, &R.p2.y);

	W = R.p2.x - R.p1.x;
	H = R.p2.x - R.p1.x;

	area = W * H;
	peri = 2 * W + 2 * H;
	printf("\n\n3.������ %d �̰� �ѷ��� %d �Դϴ�.\n", area, abs(peri));
}
