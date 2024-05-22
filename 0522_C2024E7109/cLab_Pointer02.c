
void main(void)
{
	int N = 3000;	// 변수 선언
	int* p;	// 포인터 변수 선언

	printf("\n\n\tcLab_00 : Pointer \n\n");

	p = &N;			// 변수에 포인터(주소) 저장

	printf("\t1. N = %d\n", N);		// 변수의 값 출력
	printf("\t2. &N = %u\n\n", &N);	// 변수의 주소 출력

	printf("\t3. p = %u\n", p);		// 포인터(주소)의 값 출력
	printf("\t4. *p = %d\n", *p);	// 포인터를 통한 간접 참조 값 출력

    printf("\n\n\t작성자 : 김인찬(2024E7109) \n\n");

}
