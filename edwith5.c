#include <stdio.h>

int main()
{
	int n, s, m, h;

	printf("�ñ��� �ʴ�?");
	scanf("%d", &n);

	s = n % 60;
	m = n / 60 % 60;
	h = n / 60 / 60;

	printf("%d�ʴ� %d�ð� %d�� %d���Դϴ�.\n", n, h, m, s);

	return 0;
}