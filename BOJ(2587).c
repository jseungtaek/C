#include<stdio.h>
//baekjoon 2587
int main()
{
	int score[5], average = 0, mid;
	for (int i = 0;i < 5;i++)
	{
		scanf("%d", &score[i]);
		average += score[i];
		for (int j = 0;j < i;j++)
		{
			if (score[i] > score[j])
			{
				int tmp = score[i];
				score[i] = score[j];
				score[j] = tmp;
			}
		}
	}
	printf("%d\n%d", average / 5, score[2]);
	return 0;
	
}