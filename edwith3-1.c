#include <stdio.h>
int main()
{
	int height;
	double weight, s_weight, gap;

	height = 143;
	weight = 40;

	s_weight = (height - 100) * 0.9;

	gap = weight - s_weight;

	printf("키:%d\n", height);
	printf("체중:%.1lf\n\n", weight);
	printf("표준체중%.1lf과의 차이 %+.1lfkg\n", s_weight, gap);

	return 0;
}