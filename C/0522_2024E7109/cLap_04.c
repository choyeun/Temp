#pragma warning(disable:4996)
#include <stdio.h>

void main(void)
{
	int INT = 10; int * pINT;
	char CHAR = 69; char* pCHAR;
	float FLOAT = 12.3; float* pFLOAT;

	printf("\n\n\tcLab_04 : 변수의 주소 \n\n");

	printf("\t1. INT 의 주소: %u\n", &INT);	// 변수 INT의 주소 출력
	printf("\t2. CHAR 의 주소: %u\n", &CHAR);	// 변수 CHAR의 주소 출력
	printf("\t3. FLOAT 의 주소: %u\n", &FLOAT);	// 변수 FLOAT의 주소 출력
	printf("\n");
	pINT = &INT; pCHAR = &CHAR; pFLOAT = &FLOAT;
	printf("\t1a. INT 의 주소: %u\n", pINT+1);	// 변수 INT의 주소 출력
	printf("\t2a. CHAR 의 주소: %u\n", pCHAR + 1);	// 변수 CHAR의 주소 출력
	printf("\t3a. FLOAT 의 주소: %u\n", pFLOAT + 1);	// 변수 FLOAT의 주소 출력
    printf("\n\n\t작성자 : 김인찬(2024E7109) \n\n");
}
