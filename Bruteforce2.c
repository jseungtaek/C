#include<stdio.h>
//baekjoon 2231
int main()
{
	int N, sum = 0;

	scanf("%d", &N);
	for (int i = 1;i < N;i++)
	{
		sum = i + i / 1000000 + (i / 100000) % 10 + (i / 10000) % 10 + (i / 1000) % 10 + (i / 100) % 10 + (i / 10) % 10 + i % 10;
		if (sum == N)
		{
			sum = i;
			break;
		}
		else sum = 0;
	}
	printf("%d", sum);
	return 0;
}