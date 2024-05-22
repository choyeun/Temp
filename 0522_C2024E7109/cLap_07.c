#include <stdio.h>

void main(void) {
    int INT = 10;
    int* pINT;
    char CHAR = 'A';
    char* pCHAR;
    float FLOAT = 12.3;
    float* pFLOAT;
    double DOUBLE = 12.3;
    double* pDOUBLE;

    printf("\n\n\tcLab_07 : Pointer-2 \n\n");

    pINT = &INT;
    printf("\t1. INT = %d\n", INT);
    printf("\t2. sizeof(INT) = %d\n\n", sizeof(INT));

    pCHAR = &CHAR;
    printf("\t3. CHAR = %d\n", CHAR);
    printf("\t4. sizeof(CHAR) = %d\n\n", sizeof(CHAR));

    pFLOAT = &FLOAT;
    printf("\t5. FLOAT = %.6f\n", FLOAT);
    printf("\t6. sizeof(FLOAT) = %d\n\n", sizeof(FLOAT));

    pDOUBLE = &DOUBLE;
    printf("\t7. DOUBLE = %.6f\n", DOUBLE);
    printf("\t8. sizeof(DOUBLE) = %d\n\n", sizeof(DOUBLE));

    printf("\n\n\t작성자 : 김인찬(2024E7109) \n\n");

}
