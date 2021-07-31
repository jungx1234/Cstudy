#include <stdio.h>

int main()
{
	int height;
	double weight, s_weight, gap;

	printf("===자료 입력===\n");
	printf("키?");
	scanf("%d", &height);
	printf("체중?");
	scanf("%lf", &weight);

	s_weight = (height - 100) * 0.9;
	gap = weight - s_weight;

	printf("===결과 출력===\n");
	printf("표준체중%.1lf과의 차이%+.1lfkg\n", s_weight, gap);

	return 0;
}