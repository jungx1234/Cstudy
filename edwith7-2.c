int main()
{
	int game_1, game_2, game_4;
	int day_2, point;
	point = 0;
	printf("����Ʈ������ ������ 1�ð� �̻� �ϳ���?(1. ��, 2.�ƴϿ�)");
	scanf("%d", &game_1);

	if (game_1 == 2)
	{
		print("�Ϸ� ��� 2�ð� �̻� ���� �ʰ� ���� ����ϳ���?(1.��, 2.�ƴϿ�)");
		scanf("%d", &day_2);

		if (day_2 == 1)
			point = point + 2;
	}
	else
	{
		point = point + 2;
		printf("�Ϸ��� ��� 2�ð� �̻� �ϳ���?(1.��, 2.�ƴϿ�)");
		scanf("d%", &game_2);
		if (game_2 == 1)
			point = point + 2;
		else
		{
			printf("�� ���� 4�ð� �̻� �� ���� �ֳ���?(1.��, 2. �ƴϿ�)");
			scanf("%d", &game_4);

			if (game_4 == 1)
				point++;
		}
	}
	printf("\n>>", point);
	
	return 0;
}