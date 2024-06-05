//
// Created by AYU on 24. 6. 5.
//
#include <stdio.h>
#include <string.h>

int main() {
 // 컴파일러 제공 매크로 사용
    const char *date = __DATE__;
    const char *time = __TIME__;
    const char *timestamp = __TIMESTAMP__;

    // __DATE__ 매크로의 형식은 "Mmm dd yyyy"
    // 이를 "yyyy년 mm월 dd일 (요일)" 형식으로 변환
    char month[4], day[3], year[5];
    sscanf(date, "%s %s %s", month, day, year);

    // 월을 한글로 변환
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

    // 요일 변환
    char dayOfWeek[10];
    if (strstr(timestamp, "Mon")) strcpy(dayOfWeek, "월");
    else if (strstr(timestamp, "Tue")) strcpy(dayOfWeek, "화");
    else if (strstr(timestamp, "Wed")) strcpy(dayOfWeek, "수");
    else if (strstr(timestamp, "Thu")) strcpy(dayOfWeek, "목");
    else if (strstr(timestamp, "Fri")) strcpy(dayOfWeek, "금");
    else if (strstr(timestamp, "Sat")) strcpy(dayOfWeek, "토");
    else if (strstr(timestamp, "Sun")) strcpy(dayOfWeek, "일");

    // 시간 데이터 출력
    printf("__DATE__    = %s\n", date);
    printf("__TIME__    = %s\n", time);
    printf("__TIMESTAMP__ = %s\n", timestamp);
    printf("현재시간은 %s년 %s월 %s일 (%s) %s\n", year, koreanMonth, day, dayOfWeek, time);
    return 0;
}
