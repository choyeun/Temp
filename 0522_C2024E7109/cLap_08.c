#include <stdio.h>
void main(void) {
	char* pc;
	int* pi;
	double* pd;

	printf("\n\n\tcLab_08 : Pointer-3 \n\n");

	pc = (char*)10000;
	pi = (int*)10000;
	pd = (double*)10000;
	printf("\t1. 증가 전 pc = %d,  pi = %d,  pd = %d\n", pc, pi, pd);

	pc++;
	pi++;
	pd++;
	printf("\t2. 증가 후 pc = %d,  pi = %d,  pd = %d\n", pc, pi, pd);
	printf("\t3. pc+2 = %d, pi+2 = %d, pd+2 = %d\n", pc + 2, pi + 2, pd + 2);

    printf("\n\n\t작성자 : 김인찬(2024E7109) \n\n");
}
