int main()
{
	int game_1, game_2, game_4;
	int day_2, point;
	point = 0;
	printf("스마트폰으로 게임을 1시간 이상 하나요?(1. 예, 2.아니오)");
	scanf("%d", &game_1);

	if (game_1 == 2)
	{
		print("하루 평균 2시간 이상 쉬지 않고 폰을 사용하나요?(1.예, 2.아니오)");
		scanf("%d", &day_2);

		if (day_2 == 1)
			point = point + 2;
	}
	else
	{
		point = point + 2;
		printf("하루이 평균 2시간 이상 하나요?(1.예, 2.아니오)");
		scanf("d%", &game_2);
		if (game_2 == 1)
			point = point + 2;
		else
		{
			printf("한 번에 4시간 이상 한 적이 있나요?(1.예, 2. 아니오)");
			scanf("%d", &game_4);

			if (game_4 == 1)
				point++;
		}
	}
	printf("\n>>", point);
	
	return 0;
}