//
// Created by AYU on 24. 6. 11.
//
#pragma warning(disable:4996)
#include <stdio.h>

void main() {

    printf("\n▷ File00 - 스티브잡스 연설문 출력하기-1 \n\n");


    FILE* 파일 = fopen("c:/temp/jobs.txt", "r");
    char 문자;

    int 글자 = 0;
    int 빈칸 = 0;
    int 마침표 = 0;
    int 줄바꿈 = 0;

    if (파일 == NULL) {
        printf("파일 열기 실패\n");
    }
    else {
        while ((문자 = fgetc(파일)) != EOF) {
            printf("%c", 문자);
            글자++;
            if (문자 == ' ') { 빈칸 = 빈칸 + 1; }
            if (문자 == '.') { 마침표++; }
            if (문자 == '\n') { 줄바꿈++; }
        }
    }
    printf("\n\n<< 데이터 분석 >>");
    printf("\n-----------------");
    printf("\n1. 글자수 : %5d", 글자);
    printf("\n2. 단어수 : %5d", 빈칸);
    printf("\n3. 문장수 : %5d", 마침표);
    printf("\n4. 줄바꿈 : %5d", 줄바꿈);
    printf("\n-----------------");

    fclose(파일);

    printf("\n\n▷ 김인찬(2024E7109)-%s\n\n", __TIMESTAMP__);
}
