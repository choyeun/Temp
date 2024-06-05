#pragma warning(disable:4996)
// 포인터와 배열의 관계
#include <stdio.h>

void main(void)
{
	int a[] = { 10, 20, 30, 40, 50 };

	printf("&a[0] = %d %u %p\n", a[0], &a[0], &a[0]);
	printf("&a[1] = %d %u %p\n", a[1], &a[1], &a[1]);
	printf("&a[2] = %d %u %p\n", a[2], &a[2], &a[2]);

	printf("a = %d %u %p\n", a, &a, &a);
}
