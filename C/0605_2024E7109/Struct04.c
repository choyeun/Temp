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

	printf("\n\n사각형의 면적 계산하기... \n\n");

	printf("1.왼쪽 상단의 좌표(x,y)를 입력하시오.(정수 정수): ");
	scanf("%d %d", &R.p1.x, &R.p1.y);

	printf("2.오른쪽 하단의 좌표(x,y)를 입력하시오.(정수 정수): ");
	scanf("%d %d", &R.p2.x, &R.p2.y);

	W = R.p2.x - R.p1.x;
	H = R.p2.x - R.p1.x;

	area = W * H;
	peri = 2 * W + 2 * H;
	printf("\n\n3.면적은 %d 이고 둘레는 %d 입니다.\n", area, abs(peri));
}
