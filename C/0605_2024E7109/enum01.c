#pragma warning(disable:4996)
#include <stdio.h>

enum days { SUN, MON, TUE, WED, THU, FRI, SAT };

char* days_name[] = { "sunday", "monday", "tuesday", "wednesday", "thursday", "friday", "saturday" };

void main(){
	enum days d;

	d = WED;
	printf("�� ���� %d ��° ������ %s �Դϴ�\n", d, days_name[d]);
}
