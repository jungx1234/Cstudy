#include<stdio.h>

int main()
{
	int i, n;

	printf("");
	scanf("%d", &n);

	for (i = 1; i <= 9; i++)
	{
		print("%d*%d=%d\n", n, i, n * i);
	}
	return 0;
}