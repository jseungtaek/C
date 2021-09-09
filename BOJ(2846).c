#include<stdio.h>
//baekjoon 2846 오르막길
int main()
{
	int N, Pi[1001], H = 0, max = 0;
	scanf("%d", &N);
	scanf("%d", &Pi[0]);
	for (int i = 1;i < N;i++)
	{
		scanf("%d", &Pi[i]);
		if (Pi[i] > Pi[i - 1])
			H += Pi[i] - Pi[i - 1];
		else
			H = 0;
	    if (H > max)
			max = H;
	}
	printf("%d", max);
	return 0;
}