#include<stdio.h>
//baekjoon 2839
int main()
{
	int N, cnt = 0;

	scanf("%d", &N);

	if (N % 5 == 0)
	{
		cnt = N / 5;
		N %= 5;
	}
	else if (N % 5 == 1)
	{
		while (N>6)
		{
			N -= 5;
			cnt++;
		}
		cnt += 2;
	}
	else if (N % 5 == 2)
	{
		if (N == 7)
			cnt = -1;
		else 
		{
			while (N>12)
			{
				N -= 5;
				cnt++;
			}
			cnt += 4;
		}
	}
	else if (N % 5 == 3)
	{
		while (N>3)
		{
			N -= 5;
			cnt++;
		}
		cnt++;
	}
	else if (N % 5 == 4)
	{
		if (N == 4)
			cnt = -1;
		else 
		{
			while (N>9)
			{
				N -= 5;
				cnt++;
			}
			cnt += 3;
		}
	}
	printf("%d", cnt);
	return 0;
}
#include<stdio.h>
//baekjoon 2839
int main()
{
	int N, cnt = 0;
	scanf("%d", &N);
	while (N > 0)
	{
		if (N % 5 == 0)
		{
			N -= 5;
			cnt++;
		}
		else if (N % 3 == 0)
		{
			N -= 3;
			cnt++;
		}
		else if (N > 5)
		{
			N -= 5;
			cnt++;
		}
		else
		{
			cnt = -1;
			N %= N;
		}
	}
	printf("%d", cnt);
	return 0;
}