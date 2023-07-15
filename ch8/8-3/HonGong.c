#include <stdio.h>

int main(void)
{
	int score[] = { 10, 20, 30, 40, 50 };
	int sum = 0;
	double avg;
	int count = sizeof(score) / sizeof(score[0]);

	for (int i = 0; i < count; i++)
	{
		sum += score[i];
	}
	
	avg = sum / (double) count;

	printf("ÃÑÁ¡ : %d\n Æò±Õ : %.1lf\n", sum, avg);

	
}