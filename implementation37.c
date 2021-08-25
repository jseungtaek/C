#include<stdio.h>
//baekjoon 2010
int main()
{
	int N, plug, max = 0;
	scanf("%d", &N);
	for (int i = 0;i < N;i++)
	{
		scanf("%d", &plug);
		if (i != N - 1)
			max += plug - 1;
		else
			max += plug;
	}
	printf("%d", max);
	return 0;
}