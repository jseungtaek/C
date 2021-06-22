#include<stdio.h>
#include<string.h>
//baekjoon 4344
int array[1000][1000];

int main()
{
	int C, i, j;
	double cnt = 0, average = 0;

	scanf("%d", &C);
	
	for (i = 0;i < C;i++)
	{
		j = 0;
		cnt = 0;
		average = 0;
		scanf("%d", &array[i][j]);
		for (j = 1;j < array[i][0]+1;j++)
		{
			scanf("%d", &array[i][j]);
			average += array[i][j];
		}
		average /= (double)array[i][0];
		for (j = 1;j < array[i][0]+1;j++)
		{
			if (average < array[i][j])
				cnt++;
		}
		printf("%.3lf%%\n", (cnt / (double)array[i][0]) * 100);
	}
	return 0;
}
