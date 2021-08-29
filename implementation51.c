#include<stdio.h>
//baekjoon 2740
int main()
{
	int a[101][101] = { 0 }, b[101][101] = { 0 }, c[101][101] = { 0 }, N, M, K;
	scanf("%d%d", &N, &M);
	for (int i = 0;i < N;i++)
	{
		for (int j = 0;j < M;j++)
		{
			scanf("%d", &a[i][j]);
		}
	}
	scanf("%d%d", &M, &K);
	for (int i = 0;i < M;i++)
	{
		for (int j = 0;j < K;j++)
		{
			scanf("%d", &b[i][j]);
		}
	}
	for (int i = 0;i < N;i++)
	{
		for (int k = 0;k < K;k++)
		{
			for (int j = 0;j < M;j++)
			{
				c[i][k] += a[i][j] * b[j][k];
			}
			printf("%d ", c[i][k]);
		}
		printf("\n");
	}
	return 0;
}
