#include<stdio.h>
#define MAX 246913
//baekjoon 4948
int prime_num[MAX];
void prime(int prime[])
{
	for (int i = 1;i < MAX;i++)
		prime[i] = i;
	for (int i = 2;i < MAX;i++)
	{
		if (prime[i] == 0) continue;
		for (int j = i * 2;j < MAX;j += i)
		{
			prime[j] = 0;
		}
	}
}
int main()
{
	int prime_cnt = 0, n;
	prime(prime_num);
	scanf("%d", &n);
	while (n != 0)
	{
		for (int i = n + 1;i <= 2 * n;i++)
		{
			if (prime_num[i] != 0) prime_cnt++;
		}
		printf("%d\n", prime_cnt);
		prime_cnt = 0;
		scanf("%d", &n);
	}
	
	return 0;
}