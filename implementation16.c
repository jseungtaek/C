#include<stdio.h>
#define MAX 302
//baekjoon 2167
int coord[MAX][MAX];
int main()
{
	int sum = 0, N, M;
	scanf("%d%d", &N, &M);
	for (int i = 1;i <= N;i++)
	{
		for (int j = 1;j <= M;j++)
			scanf("%d", &coord[i][j]);
	}
	int K, i, j, x, y;
	scanf("%d", &K);
	while (K--)
	{
		scanf("%d%d%d%d", &i, &j, &x, &y);
		for (int a = i;a <= x;a++)
		{
			for (int b = j;b <= y;b++)
				sum += coord[a][b];
		}
		printf("%d\n", sum);
		sum = 0;
	}
	return 0;
}