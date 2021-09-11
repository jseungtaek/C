#include<stdio.h>
#define MAX 1000002
//baekjoon 8979 ¿Ã¸²ÇÈ
int g[MAX];
int s[MAX];
int b[MAX];
int num[1001];
int main()
{
	int N, K, order = 1;
	scanf("%d%d", &N, &K);
	for (int i = 1;i <= N;i++)
	{
		scanf("%d%d%d%d", &num[i], &g[i], &s[i], &b[i]);
		if (K == num[i])
		{
			g[0] = g[i];
			s[0] = s[i];
			b[0] = b[i];
		}
	}
	for (int i = 1;i <= N;i++)
	{
		if (K != num[i])
		{
			if (g[i] > g[0]) order++;
			else if (g[i] == g[0] && s[i] > s[0]) order++;
			else if (g[i] == g[0] && s[i] == s[0] && b[i] > b[0]) order++;
		}
	}
	printf("%d", order);
	return 0;
}