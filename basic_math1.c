#include<stdio.h>
//baekjoon 1712
int main()
{
	int A, B, C;
	int Break_even_point = 0;

	scanf("%d%d%d", &A, &B, &C);

	if (B >= C)
	{
		printf("-1");
		return 0;
	}
	Break_even_point = A / (C - B) + 1;

	printf("%d", Break_even_point);
	return 0;
}