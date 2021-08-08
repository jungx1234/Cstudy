#include <stdio.h>

int main()
{
	int i;
	int cost[5] = { 12000,9000,8700,15000,3500 };

	printf("5가지 가격 \n");

	for (i = 0; i < 5; i++)
		printf("%8d원 n", cost[i]);

	sum = 0;
	for (i = 0; i < 5; i++)
		sum = sum + cost[i];
	printf("총 %d원 \n", sum);

	average = sum / 5;

	count = 0;
	for (i = 0; i < 5; i++)
		if (cost[i] >= average)
			count++;
	printf("평균%d원 이상은 %d개 \n", average, count);

	return 0;

}