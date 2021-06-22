#include<stdio.h>
//baekjoon 2577
int main()
{
	int A, B, C;
	int array[9] = { 0 };
	int score[10] = { 0 };
	int cnt = 0;
	int mul = 0, i = 0;

	scanf("%d%d%d", &A, &B, &C);
	mul = A * B * C;

	while (mul > 0)
	{
		array[i] = mul % 10;
		mul /= 10;
		cnt++;
		i++;
	}
	for (int i = 0;i < 10;i++)
	{
		for (int j = 0;j < cnt;j++)
		{
			if (i == array[j])
			{
				score[i]++;
			}
		}
		printf("%d\n", score[i]);
	}
	return 0;
}
