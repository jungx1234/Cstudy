#include <stdio.h>
int main()
{
	int i;
	char hp[12] = "01012342424", input[12];

	printf("�޴��� ��ȣ��?");
	scanf("%s", input);

	for (i = 0; i < 12; i++)
	{
		if (hp[i] != input[i])
			break;
	}
	if (i == 12)
		printf("���� ����!");
	else
		printf("���� ����!");
	return 0;
}