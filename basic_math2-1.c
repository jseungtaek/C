#include<stdio.h>
//baekjoon 1978
int main()
{
	int N, num, primenum_cnt = 0, cnt = 0;

	scanf("%d", &N);

	for (int i = 0;i < N;i++)
	{
		scanf("%d", &num);
		for (int k = 1;k <= num;k++)
			if (num%k == 0) cnt++;
		if (cnt == 2) primenum_cnt++;
		cnt = 0;
	}
	printf("%d", primenum_cnt);
	return 0;
}