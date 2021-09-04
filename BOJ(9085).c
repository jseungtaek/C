#include<stdio.h>
//baekjoon 9085
int main()
{
	int T, N, a;
	scanf("%d", &T);
	for (int i = 0;i < T;i++)
	{
		int sum = 0;
		scanf("%d", &N);
		for (int j = 0;j < N;j++)
		{
			scanf("%d", &a);
			sum += a;
		}
		printf("%d\n", sum);
	}
	return 0;
}