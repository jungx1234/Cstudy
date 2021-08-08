#include <stdio.h>
int main()
{
int i;
char hp[12] = "01012342424";

printf("두리 연락처:");
for (i = 0; i < 11; i++)
{
	if (i == 3 || i == 7)
	{
		pritf("=");
	}
	printf("%c", hp[i]);
}
	

return 0;
}