#include <stdio.h>

void main(void)
{
	int i = 3000;
	int* p = NULL;

	printf("\n\n\tcLab_05 : Pointer-1 \n\n");

	p = &i;

	printf("\t1. i = %d\n", i);	   // 변수의 값 출력
	printf("\t2. &i = %u\n\n", &i);  // 변수의 주소 출력

	printf("\t3. p = %u\n", p);	// 포인터의 값 출력
	printf("\t4. *p = %d\n", *p);	// 포인터를 통한 간접 참조 값 출력

    printf("\n\n\t작성자 : 김인찬(2024E7109) \n\n");
}
