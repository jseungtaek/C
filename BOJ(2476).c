#include<stdio.h>
#include<string.h>
#include<ctype.h>
//baekjoon 2476 주사위 게임
int main()
{
	int dice, N, max = 0, digit, max_m = 0, money = 0;
	scanf("%d", &N);
	for (int i = 0;i < N;i++)
	{
		int num[7] = { 0 };
		for (int j = 0;j < 3;j++)
		{
			scanf("%d", &dice);
			num[dice]++;
		}
		for (int k = 0;k < 7;k++)
		{
			if (max <= num[k])
			{
				max = num[k];
				digit = k;
			}
		}
		if (max == 3)
			money = 10000 + digit * 1000;
		else if (max == 2)
			money = 1000 + digit * 100;
		else
			money = digit * 100;
		max = 0;
		if (money > max_m)
			max_m = money;
	}
	printf("%d", max_m);
	return 0;
}