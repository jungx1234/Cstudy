#include <stdio.h>

int main()
{
	int i, boy, girl;

	printf("���ڸ� 1, ���ڸ� 2�� �Է��ϼ���.\n");
	boy = girl = 0;
	for (i = 1; i <= 5; i++)
	{
		printf("%d���� ����/����?", i); scanf("%d", &reply);

		if (reply == 1)
			boy++;
		else if (reply == 2)
			girl++;

		printf("\n���� %d��,���� %d�� \n", boy, girl);

		return 0;
	}
}