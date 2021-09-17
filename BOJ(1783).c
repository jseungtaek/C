#include<stdio.h>
//baekjoon 1783
int main()
{
	int N, M;
	scanf("%d %d", &N, &M);
	if (N == 1) printf("1");
	else if (N == 2) printf("%d", 4 > (M + 1) / 2 ? (M + 1) / 2 : 4);
	else if (M < 7) printf("%d", 4 > M ? M : 4);
	else
		printf("%d", M - 2);
	return 0;
}