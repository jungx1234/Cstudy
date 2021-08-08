#include <stdio.h>
int main()
{
	int grade;
	printf("학년은?"); scanf("%d", &grade);

	switch (grade)
	{
	case 1: printf("Freshman\n"); break;
	case 2: printf("Sophomore\n"); break;
	case 3: printf("Junior\n"); break;
	case 4: printf("Senior\n"); break;
	default:printf("잘못된 학년\n");
	}

	return 0;
}