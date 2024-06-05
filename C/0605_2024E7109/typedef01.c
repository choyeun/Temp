#include <stdio.h>

typedef struct POINT {
	int x;
	int y;
} POINT;

POINT translate(POINT p, POINT delta) {
	POINT new_p;

	new_p.x = p.x + delta.x;
	new_p.y = p.y + delta.y;

	return new_p;
}

void main(void) {
	POINT p = { 2, 3 };
	POINT delta = { 10, 10 };
	POINT result = { 0, 0 };

	printf("\n\ntypedef-01\n\n");
	printf("1.원본 p 좌표는 (%2d, %2d)입니다.\n", result.x, result.y);

	printf("2. delta 좌표는 (%2d, %2d)입니다.\n", delta.x, delta.y);
	printf("\n\tresult = translate(p, delta);\n\n");
	result = translate(p, delta);

	printf("3.새로운 좌표는 (%2d, %2d)입니다.\n", result.x, result.y);
	printf("\n\n특별하지는 않죠 !!!\n\n");
}
