#include <stdio.h>

int main()
{
	int height;
	double std_weight;

	printf("===========\n");
	printf("Ű(cm) ǥ��ü��(kg)\n");
	printf("===========\n");

	for (height = 140; height <= 180; height += 5)
	{
		std_weight = (height - 100) * 0.9;
		printf(" %d %.1lf\n", height, std_weight);
	}
	printf("===========\n");

	return 0;
}