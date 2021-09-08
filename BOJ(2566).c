#include<stdio.h>
#define MAX 9
//baekjoon 2566 ÃÖ´ñ°ª
int main()
{
	int num[MAX][MAX], max = 0, location_x, location_y;
	for (int i = 0;i < 9;i++)
	{
		for (int j = 0;j < 9;j++)
		{
			scanf("%d", &num[i][j]);
			if (num[i][j] > max)
			{
				location_x = i + 1;
				location_y = j + 1;
				max = num[i][j];
			}
		}
	}
	printf("%d\n%d %d", max, location_x, location_y);
	return 0;
}