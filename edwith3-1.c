#include <stdio.h>
int main()
{
	int height;
	double weight, s_weight, gap;

	height = 143;
	weight = 40;

	s_weight = (height - 100) * 0.9;

	gap = weight - s_weight;

	printf("Ű:%d\n", height);
	printf("ü��:%.1lf\n\n", weight);
	printf("ǥ��ü��%.1lf���� ���� %+.1lfkg\n", s_weight, gap);

	return 0;
}