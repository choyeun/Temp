#pragma warning(disable:4996)
#include <stdio.h>


int main(void) {
	int INT = 82;	int* pINT;
	char 	CHAR = 'Q';	char* pCHAR;
	double DOUBLE = 12.34; double* pDOUBLE;

	printf("\n\n\tcLab_00 : Pointer 연산 \n\n");

	pINT = &INT;  pCHAR = &CHAR;  pDOUBLE = &DOUBLE;
	printf("\nStep#1 \n");
	printf("\t1. INT=%d &INT=%p, pINT=%p *pINT=%d \n", INT, &INT, pINT, *pINT);
	printf("\t2. CHAR=%c &CHAR=%p, pCHAR=%p *pCHAR=%c \n", CHAR, &CHAR, pCHAR, *pCHAR);
	printf("\t3. DOUBLE=%f &DOUBLE=%p, pDOUBLE=%p *pDOUBLE=%f \n", DOUBLE, &DOUBLE, pDOUBLE, *pDOUBLE);

	printf("\nStep#1 \n");
	printf("\t4. (INT+1)=%d (&INT+1)=%p, (pINT+1)=%p (*pINT+1)=%d \n", INT + 1, &INT + 1, pINT + 1, (*pINT + 1));
	printf("\t5. (CHAR+1)=%c (&CHAR+1)=%p, (pCHAR+1)=%p (*pCHAR+1)=%c \n", CHAR + 1, &CHAR + 1, pCHAR + 1, (*pCHAR + 1));
	printf("\t6. (DOUBLE+1)=%f (&DOUBLE+1)=%p, (pDOUBLE+1)=%p (*pDOUBLE+1)=%f \n", DOUBLE + 1, &DOUBLE + 1, pDOUBLE + 1, (*pDOUBLE + 1));

	printf("\nStep#1 \n");
	printf("\t7. (INT+2)=%d (&INT+2)=%p, (pINT+2)=%p (*pINT+2)=%d \n", INT + 2, &INT + 2, pINT + 2, (*pINT + 2));
	printf("\t8. (CHAR+2)=%c (&CHAR+2)=%p, (pCHAR+2)=%p (*pCHAR+2)=%c \n", CHAR + 2, &CHAR + 2, pCHAR + 2, (*pCHAR + 2));
	printf("\t9. (DOUBLE+2)=%f (&DOUBLE+2)=%f, (pDOUBLE+2)=%p (*pDOUBLE+2)=%f \n", DOUBLE + 2, &DOUBLE + 2, pDOUBLE + 2, (*pDOUBLE + 2));


    printf("\n\n\t작성자 : 김인찬(2024E7109) \n\n");
}
