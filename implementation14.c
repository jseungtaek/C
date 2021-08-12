#include<stdio.h>
//baekjoon 1100
int main()
{
	char chess;
	int cnt = 0;
	for (int i = 0;i < 8;i++)
	{
		for (int j = 0;j < 9;j++)
		{
			scanf("%c", &chess);
			if (i % 2 == 0)
			{
				if (j % 2 == 0 && chess == 'F')
					cnt++;
			}
			else
			{
				if (j % 2 != 0 && chess == 'F')
					cnt++;
			}
		}
	}
	printf("%d", cnt);
	return 0;
}
#include<stdio.h>
//baekjoon 1100
int main()
{
	char chess[8][9];
	int cnt = 0;
	for (int i = 0;i < 8;i++)
	{
		scanf("%s", chess[i]);
		for (int j = 0;j < 8;j++)
		{
			if ((i + j) % 2 == 0 && chess[i][j] == 'F')
				cnt++;
		}
	}
	printf("%d", cnt);
	return 0;
}