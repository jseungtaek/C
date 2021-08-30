#include<stdio.h>
#include<math.h>
#define MAX 1000001
//baekjoon 1016
long long num[MAX];
int main()
{
	long long min, max, cnt = 0;
	scanf("%lld%lld", &min, &max);
	for (long long i = 2;i*i <= max;i++)
	{
		long long m = min / (i*i);
		if (min % (i*i)) m++;
		while (m*i*i <= max)
		{
			num[m*i*i - min] = 1;
			m++;
		}
	}
	for (int i = 0;i <= max - min;i++)
	{
		if (num[i] == 0) cnt++;
	}
	printf("%d", cnt);
	return 0;
}