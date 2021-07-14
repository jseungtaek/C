#include<stdio.h>
#define MAX 1000001
//baekjoon 1929
int prime_num[MAX], M, N;
void primenum(int prime[])
{
	for (int i = 2;i < MAX;i++)
	{
		prime[i] = i;
	}
	for (int i = 2;i < MAX;i++)
	{
		if (prime[i] == 0) continue;
		for (int j = i*2;j < MAX;j+=i)
			prime[j] = 0;
	}
}
int main()
{
	scanf("%d%d", &M, &N);
	primenum(prime_num);
	for (int i = M;i <= N;i++)
	{
		if (prime_num[i] != 0) printf("%d\n", prime_num[i]);
	}
	return 0;
}