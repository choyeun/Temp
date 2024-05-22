#include <stdio.h>

void main(void)
{
  int a[] = { 10, 20, 30, 40, 50 };
  printf("a = %u \n", a);
  printf("a + 1 = %u \n", a + 1);
  printf("sizeof(a[0]) = %d \n\n", sizeof(a[0]) );

  printf("a[0]=%d a[1]=%d \n",a[0], a[1]);
  printf("*a = %d \n", *a);
  printf("*(a+1) = %d \n", *(a+1) );
  printf("a = %d  a+1 = %d \n\n", a, a+1 );
}
