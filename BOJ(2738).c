#include<stdio.h>
#define max 101
//baekjoon 2738 Çà·Äµ¡¼À
int a[max][max], b[max][max], n, m;
int main()
{
	scanf("%d %d", &n, &m);
	for (int i = 0;i < n;i++)
	{
		for (int j = 0;j < m;j++)
		{
			scanf("%d", &a[i][j]);
		}
	}
	for (int i = 0;i < n;i++)
	{
		for (int j = 0;j < m;j++)
		{
			scanf("%d", &b[i][j]);
		}
	}
	for (int i = 0;i < n;i++)
	{
		for (int j = 0;j < m;j++)
		{
			a[i][j] += b[i][j];
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
	return 0;
}