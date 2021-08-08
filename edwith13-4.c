#include <stdio.h>
#include <string.h>
int main()
{
	int i;
	char hp[12] = "01012342424", input[12];

	printf("휴대폰 번호는?");
	scanf("%s", input);

	if (strcmp(hp,input == 0))
		printf("인증 성공!");
	else
		printf("인증 실패!");
	return 0;
}