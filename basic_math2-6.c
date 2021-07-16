#include<stdio.h>
//baekjoon 9020
#define MAX 10001
int prime_num[MAX];
void prime(int prime[])
{
	for (int i = 2;i < MAX;i++)
		prime[i] = i;
	for (int i = 2;i < MAX;i++)
	{
		if (prime[i] == 0) continue;
		for (int j = i * i;j < MAX;j += i)
			prime[j] = 0;
	}
}
int main()
{
	int T, even_num;
	prime(prime_num);
	scanf("%d", &T);
	for (int i = 0;i < T;i++)
	{
		scanf("%d", &even_num);
		for (int j = even_num / 2;j > 0;j--) //even_num 중간부터 비교 (여러 케이스가 나올 때 가장 차이가 작은 것을 도출하기 위함)
		{
			if (prime_num[j] != 0 && prime_num[even_num - j] != 0)
			{
				printf("%d %d\n", j, even_num - j);
				j = 0;
			}
		}
	}
	return 0;
}