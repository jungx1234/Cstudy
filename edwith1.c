#include <stdio.h>

int main()
{
	double width, height, area;

	scanf("%lf", &width);
	scanf("%lf", &height);

	area = width * height / 2;

	printf("¸éÀû=%.1lf\n", area);

	return 0;
}