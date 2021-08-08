#include <stdio.h>
int main()
{
	char id[15];

	printf("");
	scanf("%s", id);

	printf("20%c%c%년생", id[0], id[1]);

	if (id[7] == 3)
		printf("남자이군요.\n");
	else if (id[7] == 4)
		printf("여자이군요.\n");

	return 0;
}