#include <stdio.h>

int main()
{
	int height;
	double weight, s_weight, gap;

	printf("===�ڷ� �Է�===\n");
	printf("Ű?");
	scanf("%d", &height);
	printf("ü��?");
	scanf("%lf", &weight);

	s_weight = (height - 100) * 0.9;
	gap = weight - s_weight;

	printf("===��� ���===\n");
	printf("ǥ��ü��%.1lf���� ����%+.1lfkg\n", s_weight, gap);

	return 0;
}