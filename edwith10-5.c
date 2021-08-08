#include <stdio.h>
int main()
{
	int i, n, sum;

	printf("몇 층까지?"); scanf("%d", &n);

	count = 1;
	total = 1;

	for (floor = 2; floor <= n; floor++)
	{
		count = count + 2;
		total = total + count;
	}
	printf("%d개가 필요합니다.\n", total);
	return 0;
}