#include <stdio.h>

int main(void)
{
	int a = 30;
	int res;

	res = (10 < a) && (a < 20);
	printf("(10 < a) && (a < 20) : %d\n", res);
	res = 10 < a < 20;
	printf("10 < a < 20 : %d", res);

	return 0;
}