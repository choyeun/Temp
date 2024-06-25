#include <stdio.h>
#include <math.h>

// 정수 부분을 진법으로 변환
void convertIntegerPart(int num, int base, char *result) {
    int index = 0;
    char temp[32];
    if (num == 0) {
        result[index++] = '0';
    } else {
        while (num > 0) {
            int remainder = num % base;
            if (remainder < 10) {
                temp[index++] = 48 + remainder;
            } else {
                temp[index++] = 55 + remainder;
            }
            num = num / base;
        }
        for (int i = 0; i < index; i++) {
            result[i] = temp[index - i - 1];
        }
    }
    result[index] = '\0';
}

// 소수 부분을 진법으로 변환
void convertFractionalPart(double num, int base, char *result) {
    int index = 0;
    for (int i = 0; i < 5; i++) {
        num *= base;
        int digit = (int)num;
        if (digit < 10) {
            result[index++] = 48 + digit;
        } else {
            result[index++] = 55 + digit;
        }
        num -= digit;
    }
    result[index] = '\0';
}

int main() {
    double number;
    int base;
    char integerPart[32], fractionalPart[32];
    
    printf("숫자를 입력하세요: ");
    scanf("%lf", &number);
    printf("진법을 입력하세요: ");
    scanf("%d", &base);
    
    int integerPartValue = (int)floor(number);
    double fractionalPartValue = number - integerPartValue;
    
    convertIntegerPart(integerPartValue, base, integerPart);
    convertFractionalPart(fractionalPartValue, base, fractionalPart);
    
    printf("변환된 숫자: %s.%s\n", integerPart, fractionalPart);
    
    return 0;
}
