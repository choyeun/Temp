#include <stdio.h>

int main(void) {
	int 	INT = 82;
	int*	pINT;
	char 	CHAR = 'Q';
	char 	*pCHAR;

	printf("\n\n\tcLab_03 : Pointer 연산 \n\n");

	pINT = &INT;  pCHAR = &CHAR;

	printf("\t1. INT=%d &INT=%d,  pINT=%d *pINT=%d \n\n", INT, &INT, pINT, *pINT);

	printf("\t2. CHAR=%c &CHAR=%d, pCHAR=%d *pCHAR=%c \n\n", CHAR, &CHAR, pCHAR, *pCHAR);

	printf("\t3. (INT+1)=%d  (&INT+1)=%d,  (pINT+1)=%d  (*pINT+1)=%d \n\n", INT + 1, &INT + 1, pINT + 1, (*pINT + 1));

	printf("\t4. (CHAR+1)=%c (&CHAR+1)=%d, (pCHAR+1)=%d (*pCHAR+1)=%c \n\n", CHAR + 1, &CHAR + 1, pCHAR + 1, (*pCHAR + 1));

	printf("\t5. (INT+2)=%d  (&INT+2)=%d,  (pINT+2)=%d  (*pINT+2)=%d \n\n", INT + 2, &INT + 2, pINT + 2, (*pINT + 2));

	printf("\t6. (CHAR+2)=%c (&CHAR+2)=%d, (pCHAR+2)=%d (*pCHAR+2)=%c \n\n", CHAR + 2, &CHAR + 2, pCHAR + 2, (*pCHAR + 2));

	printf("\n\n\t작성자 : 김인찬(2024E7109) \n\n");
}
