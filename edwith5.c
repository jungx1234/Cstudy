#include <stdio.h>

int main()
{
	int n, s, m, h;

	printf("궁금한 초는?");
	scanf("%d", &n);

	s = n % 60;
	m = n / 60 % 60;
	h = n / 60 / 60;

	printf("%d초는 %d시간 %d분 %d초입니다.\n", n, h, m, s);

	return 0;
}