#include<stdio.h>
//baekjoon 2581
int main()
{
	int M, N, sum = 0, cnt = 0, min = 10000;
	scanf("%d%d", &M, &N);
	for (int i = M;i <= N;i++)
	{
		for (int j = 2;j <= i;j++)
		{
			if (i%j == 0) cnt++;
		}
		if (cnt == 1)
		{
			sum += i;
			if (min > i)
				min = i;
		}
		cnt = 0;
	}
	if (sum == 0) printf("-1");
	else printf("%d\n%d", sum, min);
	return 0;
}