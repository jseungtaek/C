#include<stdio.h>
//baekjoon 2460
int main()
{
	int a, b, max = 0, now = 0;
	for (int i = 0;i < 10;i++)
	{
		scanf("%d %d", &a, &b);
		now += b - a;
		if (max<now)
			max = now;
	}
	printf("%d", max);
	return 0;
}