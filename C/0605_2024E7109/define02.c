//
// Created by AYU on 24. 6. 5.
//
#include <stdio.h>

void main(void) {
	printf("\n\n#define-02\n");
	printf("\n\t1.DATE = %s", __DATE__);
	printf("\n\t2.TIMEE = %s", __TIME__);
	printf("\n\t3.LINE = %d", __LINE__);
	printf("\n\t4.FILE name : %s", __FILE__);
	printf("\n\t5.FILE timestamp = %s", __TIMESTAMP__);
	printf("\n\n쓸만하죠\n\n");
}
