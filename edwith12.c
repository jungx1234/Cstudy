#include <stdio.h>

int main()
{
	int i;
	int cost[5] = { 12000,9000,8700,15000,3500 };

	printf("5���� ���� \n");

	for (i = 0; i < 5; i++)
		printf("%8d�� n", cost[i]);

	sum = 0;
	for (i = 0; i < 5; i++)
		sum = sum + cost[i];
	printf("�� %d�� \n", sum);

	average = sum / 5;

	count = 0;
	for (i = 0; i < 5; i++)
		if (cost[i] >= average)
			count++;
	printf("���%d�� �̻��� %d�� \n", average, count);

	return 0;

}