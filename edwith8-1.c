int main()
{
	int n;

	printf("�ֹι�ȣ 7��° ����?");
	scanf("%d", &n);

	switch (n)
	{
	case 1:printf("2000�� ���� ��� ����\n"); break;
	case 2:printf("2000�� ���� ��� ����\n"); break;
	case 3:printf("2000�� ���� ��� ����\n"); break;
	case 4:printf("2000�� ���� ��� ����\n"); break;
	case 5: case 6: case 7 :case 8:printf("�ܱ���\n"); break;
	default:printf("��� ����� �ƴմϴ�.\n");
	}
	return 0;
}