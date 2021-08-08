int main()
{
	int i;
	double sum;

	sum = 0;
	for (i = 1; i <= 100; i++)
		sum = sum + (1.0 / i);

	printf("1/1+1/2+1/3＋1?4+・・・+1/100=%.2lf\n", n, sum);

	return 0;

}