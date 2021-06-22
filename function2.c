#include<stdio.h>
#include<string.h>

//baekjoon 1065
int Hansu(int n);

int Hansu(int n)
{
	int a, b, c, cnt = 0;
	if (n < 100) return n;
	else
	{
		for (int i = 100;i <= n;i++)
		{
			a = i / 100;
			b = (i / 10) % 10;
			c = i % 10;
			if (a - b == b - c) cnt++;
		}
		return (99 + cnt);
	}
}
int main()
{
	int N;
	scanf("%d", &N);
	printf("%d", Hansu(N));
	return 0;
}
