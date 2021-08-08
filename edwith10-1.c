#include <stdio.h>

int main()
{
	int i, n, result;

	printf("2에서 얼마까지의 합?");
	scanf("%d", &n);

	result = 1;
	for (i = 2; i <= n; i = i + 2)
		result = result * i;

	printf("2~%d까지의 짝수의 곱 : %d \n", n, result);

	return 0;
}