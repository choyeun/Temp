//
// Created by AYU on 24. 6. 5.
//
#pragma warning(disable:4996)
#include <stdio.h>

union example {
	char C;
	int N;
};

int main(void) {
	union example UNION;

	printf("\n\n공용체(union)-01\n\n");

	UNION.C = 'A';
	printf("\n1. UNION.C = \'A\';");
	printf("\n-> UNION.C : \'%c\', \tUNION.N : %10d, \t&UNION = %p\n", UNION.C, UNION.N, &UNION);

	UNION.N = 123;
	printf("\n2. UNION.N = 123;");
	printf("\n-> UNION.C : \'%c\', \tUNION.N : %10d, \t&UNION = %p\n", UNION.C, UNION.N, &UNION);


	printf("\n\n이해가 되는지 ?\n\n");
}
