#pragma warning(disable:4996)
#include <stdio.h>

enum days { SUN, MON, TUE, WED, THU, FRI, SAT };

char* days_name[] = { "sunday", "monday", "tuesday", "wednesday", "thursday", "friday", "saturday" };

void main(){
	enum days d;

	d = WED;
	printf("한 주의 %d 번째 요일은 %s 입니다\n", d, days_name[d]);
}
