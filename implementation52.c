#include<stdio.h>
//baekjoon 2506
int main()
{
	int score = 0, N, K = 0, problem;
	scanf("%d", &N);
	for (int i = 0;i < N;i++)
	{
		scanf("%d", &problem);
		if (problem)
		{
			K++;
			score += K;
		}
		else
			K = 0;
	}
	printf("%d", score);
	return 0;
}