#include<stdio.h>
#include<math.h>
//baekjoon 11729
int cnt;
void hanoitower(int n, int from, int tmp, int to)
{
	if (n == 1)
		printf("%d %d\n", from, to);
	else {
		hanoitower(n - 1, from, to, tmp);
		printf("%d %d\n", from, to);
		hanoitower(n - 1, tmp, from, to);
	}
}
int main()
{
	int K, N;
	scanf("%d", &K);
	N = pow(2, K) - 1;
	printf("%d\n", N);
	hanoitower(K, 1, 2, 3);
	return 0;
}