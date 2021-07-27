#include<stdio.h>
#define MAX 1000000
//baekjoon 2798
int sum[MAX];
int main()
{
	int N, M, card[100], m = 0;
	
	scanf("%d%d", &N, &M);

	for (int i = 0;i < N;i++)
	{
		scanf("%d", &card[i]);
	}
	for (int i = 0;i < N-2;i++)
	{
		for (int j = i + 1;j < N - 1;j++)
		{
			for (int k = j + 1;k < N;k++)
			{
				sum[m] = card[i] + card[j] + card[k];
				m++;
			}
		}
	}
	int max = 0;
	for (int i = 0;i < m;i++)
	{
		if (sum[i] <= M)
		{
			if (max < sum[i])
				max = sum[i];
		}
	}
	printf("%d", max);
	return 0;
}