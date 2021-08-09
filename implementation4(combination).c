#include<stdio.h>
#include<math.h>
//baekjoon 11050
int Fac(int n)
{
	if (n == 0) return 1;
	return n * Fac(n - 1);
}
int main()
{
	int N, K;
	scanf("%d%d", &N, &K);
	printf("%d", Fac(N) / (Fac(N - K)*Fac(K)));
	
	return 0;
}