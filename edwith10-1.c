#include <stdio.h>

int main()
{
	int i, n, result;

	printf("2���� �󸶱����� ��?");
	scanf("%d", &n);

	result = 1;
	for (i = 2; i <= n; i = i + 2)
		result = result * i;

	printf("2~%d������ ¦���� �� : %d \n", n, result);

	return 0;
}