#include <stdio.h>
int main()
{
	int i, n, sum;

	printf("�� ������?"); scanf("%d", &n);

	count = 1;
	total = 1;

	for (floor = 2; floor <= n; floor++)
	{
		count = count + 2;
		total = total + count;
	}
	printf("%d���� �ʿ��մϴ�.\n", total);
	return 0;
}