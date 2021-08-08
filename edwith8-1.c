int main()
{
	int n;

	printf("주민번호 7번째 수는?");
	scanf("%d", &n);

	switch (n)
	{
	case 1:printf("2000년 이전 출생 남자\n"); break;
	case 2:printf("2000년 이전 출생 여자\n"); break;
	case 3:printf("2000년 이후 출생 남자\n"); break;
	case 4:printf("2000년 이후 출생 여자\n"); break;
	case 5: case 6: case 7 :case 8:printf("외국인\n"); break;
	default:printf("고려 대상이 아닙니다.\n");
	}
	return 0;
}