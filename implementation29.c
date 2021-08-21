#include<stdio.h>
#define MAX 101
//baekjoon 2563
int sq[MAX][MAX];
int main()
{
	
	int T, x, y, area = 0;
	scanf("%d", &T);
	for (int i = 0;i < T;i++)
	{
		scanf("%d%d", &x, &y);
		for (int j = x;j < x+10;j++)
		{
			for (int k = y;k < y + 10;k++)
			{
				if (sq[j][k] != 1)
				{
					area++;
					sq[j][k] = 1;
				}
			}
		}
	}
	printf("%d", area);
	return 0;
}