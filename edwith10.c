#include <stdio.h>

int main()
{
	int i, n, sum;

	printf("1���� �󸶱����� ��?");
	scanf("%d", &n);

	sum = 0;
	for (i = 1; i <= n; i++)
		sum = sum + 1;

	printf("1~%d������ �� : %d \n", n, sum);

	return 0;
}