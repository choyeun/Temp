#pragma warning(disable:4996)
#include <stdio.h>

int main(void) {
	int A[3]; int* pA;

	printf("\n\n\tcLab_02 : Array & Pointer \n\n");

	pA = A;
	printf("\t A=%d, &A=%p, pA=%p, *pA=%d \n\n", A, &A, pA, *pA);

	A[0] = 12; A[1] = 23; A[2] = 34;

	printf("\t A[0]=%d, &A[0]=%p, pA+0=%p, *(pA+0)=%d \n\n",
		A[0], &A[0], pA + 0, *(pA + 0));
	printf("\t A[1]=%d, &A[1]=%p, pA+1=%p, *(pA+1)=%d \n\n",
		A[1], &A[1], pA + 1, *(pA + 1));
	printf("\t A[2]=%d, &A[2]=%p, pA+2=%p, *(pA+2)=%d \n\n",
		A[2], &A[2], pA + 2, *(pA + 2));

    printf("\n\n\t작성자 : 김인찬(2024E7109) \n\n");
}
