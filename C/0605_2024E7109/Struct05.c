#pragma warning(disable:4996)
#include <stdio.h>

struct point {
	int x;
	int y;
};

void main() {
	struct point p1 = { 10, 20 };
	struct point p2 = { 30, 40 };

	printf("\n\n구조체 변수의 대입과 비교\n\n");

	p2 = p1;			// 대입 가능
	//if (p1 == p2) 		// 비교 컴파일 오류!!
	{
		printf("1.p1와 p2이 같습니다.");
	}

	if ((p1.x == p2.x) && (p1.y == p2.y)) {	// 올바른 비교
		printf("2.p1와 p2이 같습니다.");
	}
}
