#include<stdio.h>
//baekjoon 13300 πÊ πË¡§
int main()
{
	int N, K, Y[2][7] = { 0 }, S, Y_tmp, cnt = 0;
	scanf("%d %d", &N, &K);
	for (int i = 0;i < N;i++)
	{
		scanf("%d %d", &S, &Y_tmp);
		if (S == 1)
			Y[1][Y_tmp]++;
		else
			Y[0][Y_tmp]++;
	}
	for (int i = 1;i < 7;i++)
	{
		while (Y[1][i]>0)
		{
			Y[1][i] -= K;
			cnt++;
		}
		while (Y[0][i]>0)
		{
			Y[0][i] -= K;
			cnt++;
		}
	}
	printf("%d", cnt);
	return 0;
}