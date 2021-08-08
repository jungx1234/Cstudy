#include <stdio.h>

int main()
{
	int age;

	printf("나이는?");
	scanf("%d", &age);

	if (age >= 20)
		printf(" 성년입니다.");
	else
		if (age >= 10)
			printf("10대입니다.");
		else
			printf("이직 10대도 아닙니다.");

	return 0;
}