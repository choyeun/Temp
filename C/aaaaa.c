#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define ROWS 10
#define COLS 4

// 버스 구조체 정의
typedef struct {
    char start[22];      // 출발지 (한글 7자 지원)
    char destination[22]; // 도착지 (한글 7자 지원)
    char date[11];       // 출발 날짜 (YYYY-MM-DD)
    char time[6];        // 출발 시간 (HH:MM)
    int seats[ROWS][COLS]; // 좌석 배열 (0은 예약되지 않음, 1은 예약됨)
} Bus;

// 좌석 초기화 함수 - 랜덤으로 좌석을 예약된 상태로 설정
void initializeSeats(Bus *bus) {
    srand(time(NULL)); // 랜덤 시드 설정
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            bus->seats[i][j] = rand() % 2; // 0 또는 1로 좌석 상태 설정
        }
    }
}

// 예약 가능한 좌석 표시 함수
void displayAvailableSeats(Bus *bus) {
    printf("예약 가능한 좌석:\n");
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            if (bus->seats[i][j] == 0) { // 0인 좌석만 출력
                printf("%d행 %d열\n", i + 1, j + 1); // 1부터 시작하도록 조정
            }
        }
    }
}

// 사용자 입력 함수 - 출발지, 도착지, 날짜, 시간을 입력받음
void getUserInput(Bus *bus) {
    printf("출발지를 입력하세요: ");
    scanf("%s", bus->start);
    printf("도착지를 입력하세요: ");
    scanf("%s", bus->destination);
    printf("날짜를 입력하세요 (YYYY-MM-DD): ");
    scanf("%s", bus->date);
    printf("시간을 입력하세요 (HH:MM): ");
    scanf("%s", bus->time);
}

// 문자열을 분리하여 좌석 번호를 추출하는 함수
int parseSeat(char *seatInput, int *row, int *col) {
    int length = strlen(seatInput);
    for (int i = 0; i < length; i++) {
        if (seatInput[i] == '-') {
            seatInput[i] = '\0';
            *row = atoi(seatInput);
            *col = atoi(seatInput + i + 1);
            return 1;
        }
    }
    return 0;
}

// 좌석 예약 함수 - 사용자가 선택한 좌석을 예약
void reserveSeat(Bus *bus) {
    int row, col;
    char seatInput[6]; // 좌석 입력을 받을 변수

    while (1) {
        printf("예약할 좌석을 입력하세요 (예: 9-3): ");
        scanf("%s", seatInput);

        // 입력된 좌석을 파싱하여 행과 열 번호로 분리
        if (!parseSeat(seatInput, &row, &col)) {
            printf("잘못된 형식입니다. 다시 입력하세요.\n");
            continue;
        }

        // 인덱스 범위 확인
        if (row < 1 || row > ROWS || col < 1 || col > COLS) {
            printf("잘못된 입력입니다. 다시 입력하세요.\n");
            continue;
        }

        // 이미 예약된 좌석인지 확인
        if (bus->seats[row - 1][col - 1] == 1) { // 0부터 시작하는 인덱스로 변환
            printf("죄송합니다, 해당 좌석은 이미 예약되었습니다.\n");
            displayAvailableSeats(bus); // 예약 가능한 좌석 다시 표시
        } else {
            bus->seats[row - 1][col - 1] = 1; // 좌석 예약 상태로 변경
            printf("좌석이 성공적으로 예약되었습니다.\n");
            break; // 유효한 좌석이 예약되면 루프 탈출
        }
    }
}

int main() {
    Bus bus; // 버스 객체 생성
    initializeSeats(&bus); // 좌석 초기화
    getUserInput(&bus); // 사용자 입력 받기
    displayAvailableSeats(&bus); // 예약 가능한 좌석 표시
    reserveSeat(&bus); // 좌석 예약 시도
    return 0;
}
