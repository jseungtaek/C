#include<stdio.h>
//baekjoon 2455
int main()
{
	int a, b, now = 0, max = 0;
	for (int i = 0;i < 4;i++)
	{
		scanf("%d%d", &a, &b);
		now += b - a;
		if (max < now)
			max = now;
	}
	printf("%d", max);
	return 0;
}