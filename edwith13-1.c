#include <stdio.h>
int main()
{
int i;
char hp[12] = "01012342424";

printf("두리 연락처:");
for (i = 0; i < 3; i++)
	printf("%c", hp[i]);

printf("-");
for (; i < 7; i++)
	printf("%c",hp[i]);

printf("-");
for (; i < 11; i++)
	printf("%c", hp[i]);

return 0;
}