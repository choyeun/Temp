//
// Created by AYU on 24. 6. 5.
//
#include <stdio.h>
#include <string.h>

int main() {
 // �����Ϸ� ���� ��ũ�� ���
    const char *date = __DATE__;
    const char *time = __TIME__;
    const char *timestamp = __TIMESTAMP__;

    // __DATE__ ��ũ���� ������ "Mmm dd yyyy"
    // �̸� "yyyy�� mm�� dd�� (����)" �������� ��ȯ
    char month[4], day[3], year[5];
    sscanf(date, "%s %s %s", month, day, year);

    // ���� �ѱ۷� ��ȯ
    char koreanMonth[4];
    if (strcmp(month, "Jan") == 0) strcpy(koreanMonth, "1");
    else if (strcmp(month, "Feb") == 0) strcpy(koreanMonth, "2");
    else if (strcmp(month, "Mar") == 0) strcpy(koreanMonth, "3");
    else if (strcmp(month, "Apr") == 0) strcpy(koreanMonth, "4");
    else if (strcmp(month, "May") == 0) strcpy(koreanMonth, "5");
    else if (strcmp(month, "Jun") == 0) strcpy(koreanMonth, "6");
    else if (strcmp(month, "Jul") == 0) strcpy(koreanMonth, "7");
    else if (strcmp(month, "Aug") == 0) strcpy(koreanMonth, "8");
    else if (strcmp(month, "Sep") == 0) strcpy(koreanMonth, "9");
    else if (strcmp(month, "Oct") == 0) strcpy(koreanMonth, "10");
    else if (strcmp(month, "Nov") == 0) strcpy(koreanMonth, "11");
    else if (strcmp(month, "Dec") == 0) strcpy(koreanMonth, "12");

    // ���� ��ȯ
    char dayOfWeek[10];
    if (strstr(timestamp, "Mon")) strcpy(dayOfWeek, "��");
    else if (strstr(timestamp, "Tue")) strcpy(dayOfWeek, "ȭ");
    else if (strstr(timestamp, "Wed")) strcpy(dayOfWeek, "��");
    else if (strstr(timestamp, "Thu")) strcpy(dayOfWeek, "��");
    else if (strstr(timestamp, "Fri")) strcpy(dayOfWeek, "��");
    else if (strstr(timestamp, "Sat")) strcpy(dayOfWeek, "��");
    else if (strstr(timestamp, "Sun")) strcpy(dayOfWeek, "��");

    // �ð� ������ ���
    printf("__DATE__    = %s\n", date);
    printf("__TIME__    = %s\n", time);
    printf("__TIMESTAMP__ = %s\n", timestamp);
    printf("����ð��� %s�� %s�� %s�� (%s) %s\n", year, koreanMonth, day, dayOfWeek, time);
    return 0;
}
