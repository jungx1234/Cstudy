#include <stdio.h>
int main()
{
	int i;
	char hp[12] = "01012342424", input[12];

	printf("휴대폰 번호는?");
	scanf("%s", input);

	for (i = 0; i < 12; i++)
	{
		if (hp[i] != input[i])
			break;
	}
	if (i == 12)
		printf("인증 성공!");
	else
		printf("인증 실패!");
	return 0;
}