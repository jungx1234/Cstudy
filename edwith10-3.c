#include <stdio.h>

int main()
{
	int i, count;

	count = 0;
	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
			count++;
	}
	printf("1~100 �� 3�Ǵ� 5�� ���: %d��", count);

	return 0;
}