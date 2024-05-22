#pragma warning(disable:4996)
#include <stdio.h>

int main(void) {
	int A = 123;
	int* pA;

	printf("\n\n\tcLab_00 : Pointer \n\n");

	pA = &A;
	printf("\t 1.포인터 변수에 변수의 주소 저장 : pA = &A \n");
	printf("\t 2.변수 : A = %d \n", A);
	printf("\t 3.변수의 주소 : &A = %p \n\n", &A);
	printf("\t 4.포인터 변수 : pA = %p \n", pA);
	printf("\t 5.포인터 변수가 저장된 메모리 주소에 저장된 값 : *pA = %d \n\n", *pA);

	A = 82;
	printf("\t 6.변수 : A = %d \n", A);
	printf("\t A=%d, &A=%p, pA=%p, *pA=%d \n", A, &A, pA, *pA);

    printf("\n\n\t작성자 : 김인찬(2024E7109) \n\n");

}
