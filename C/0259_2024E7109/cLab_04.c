#include <stdio.h>
void main(void)
{
    printf("cLab_00.c : 문자열의 복사\n\n");

    char src[] = "The worst things to eat before you sleep";
    char dst[100];
    int N;
    printf("원본 문자열(src)=%s\n", src);
    printf("원본 문자열(dst)=%s\n", dst);
    for (N = 0; src[N] != '\0'; N++)
    {
        dst[N] = src[N];
    }
    dst[N] = '\0';
    printf("\n\n사본 문자열(dst)=%s\n", dst);

    printf("\n작성자 : 김인찬(2024E7109)\n\n");
}