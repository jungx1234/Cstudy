#include <stdio.h>

int main()
{
	int age;

	printf("���̴�?");
	scanf("%d", &age);

	if (age >= 20)
		printf(" �����Դϴ�.");
	else
		if (age >= 10)
			printf("10���Դϴ�.");
		else
			printf("���� 10�뵵 �ƴմϴ�.");

	return 0;
}