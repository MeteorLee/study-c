#include <stdio.h>

int main(void)
{
	int a = 10;
	int* p = &a;
	double* pd;

	pd = p;
	printf("%lf\n", *pd);

	double b = 3.4;
	double* pb = &b;
	int* pi;
	pi = (int*)pb;

	printf("%.1lf\n", *pb);
	printf("%d", *pi);

	return 0;

}