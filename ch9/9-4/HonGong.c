#include <stdio.h>

int main(void)
{
	int a = 10, b = 20;
	const int* pa = &a;

	printf("변수 a 값 : %d\n", *pa);
	pa = &b;
	printf("변수 b 값 : %d\n", *pa);
	pa = &a;
	a = 15;
	printf("변수 a 값 : %d\n", *pa);
	// *pa = 30;
	
	return 0;
}