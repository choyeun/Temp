#include <stdio.h>

#define VALUE 100
#define PI 3.1415952
#define MAX(X, Y) ((X>Y)?X:Y)

void main(void) {
	printf("\n\n#define-01\n");
	printf("\n\t1.VALUE  = %d", VALUE);
	printf("\n\t2.반지름 5인 원의 둘래 = %f", 5 * PI);
	printf("\n\t3.MAX(5, 7) = %d", MAX(5, 7));
	printf("\n\n쓸만하죠\n\n");
}
