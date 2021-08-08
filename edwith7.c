#include <stdio.h>

int main()
{
	int age;

	printf("나이는?");
	scanf("%d", &age);

	if (age >= 20)
		printf(" 성년입니다.");
	else
		printf("미성년입니다.");

	return 0;
}