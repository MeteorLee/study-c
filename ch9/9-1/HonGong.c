#include <stdio.h>

int main(void)
{
	int a;
	double b;
	char c;

	printf("int 형 변수의 주소 : %u\n", &a);
	printf("double 형 변수의 주소 : %u\n", &b);
	printf("char 형 변수의 주소 : %u\n\n", &c);

	printf("int 형 변수의 주소 : %p\n", &a);
	printf("double 형 변수의 주소 : %p\n", &b);
	printf("char 형 변수의 주소 : %p\n", &c);

	return 0;
}