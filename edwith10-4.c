#include <stdio.h>

int main()
{
	int i, boy, girl;

	printf("남자면 1, 여자면 2를 입력하세요.\n");
	boy = girl = 0;
	for (i = 1; i <= 5; i++)
	{
		printf("%d번은 남자/여자?", i); scanf("%d", &reply);

		if (reply == 1)
			boy++;
		else if (reply == 2)
			girl++;

		printf("\n남자 %d명,여자 %d명 \n", boy, girl);

		return 0;
	}
}