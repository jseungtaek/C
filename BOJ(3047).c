#include<stdio.h>
//baekjoon 3047 ABC
int main()
{
	int A, B, C, tmp;
	char str[4];
	scanf("%d%d%d", &A, &B, &C);
	scanf("%s", str);
	if (C < B)
	{
		tmp = C;
		C = B;
		B = tmp;
		if (C < A)
		{
			tmp = A;
			A = C;
			C = tmp;
		}
		if (B < A)
		{
			tmp = A;
			A = B;
			B = tmp;
		}
	}
	else
	{
		if (C < A)
		{
			tmp = A;
			A = C;
			C = tmp;
		}
		if (B < A)
		{
			tmp = A;
			A = B;
			B = tmp;
		}
	}
	for (int i = 0;i < 3;i++)
	{
		if (str[i] == 'A')
			printf("%d ", A);
		else if (str[i] == 'B')
			printf("%d ", B);
		else
			printf("%d ", C);
	}
	return 0;
}