#include <stdio.h>

void swap(int* pa, int* pb);

int main(void)
{
	int a = 10, b = 20;

	swap(&a, &b);
	printf("a : %d\nb : %d\n", a, b);
}

void swap(int* pa, int* pb)
{
	int temp;

	temp = *pa;
	*pa = *pb;
	*pb = temp;
}