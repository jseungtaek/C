#include<stdio.h>
//baekjoon 9625 BABBA
int main()
{
	int numA = 1, numB = 0, N;
	scanf("%d", &N);
	for (int i = 0;i < N;i++)
	{
		int tmp = numA;
		numA = numB;
		numB = numB + tmp;
	}
	printf("%d %d", numA, numB);
	return 0;
}