#include <stdio.h>
int main()
{
	char id[15];

	printf("");
	scanf("%s", id);

	printf("20%c%c%���", id[0], id[1]);

	if (id[7] == 3)
		printf("�����̱���.\n");
	else if (id[7] == 4)
		printf("�����̱���.\n");

	return 0;
}