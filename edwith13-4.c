#include <stdio.h>
#include <string.h>
int main()
{
	int i;
	char hp[12] = "01012342424", input[12];

	printf("�޴��� ��ȣ��?");
	scanf("%s", input);

	if (strcmp(hp,input == 0))
		printf("���� ����!");
	else
		printf("���� ����!");
	return 0;
}