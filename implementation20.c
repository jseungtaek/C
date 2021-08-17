#include<stdio.h>
//baekjoon 2576
int main()
{
	int num, sum = 0, min = 100;

	for (int i = 0;i < 7;i++)
	{
		scanf("%d", &num);
		if (num % 2 != 0)
		{
			sum += num;
			if (min > num)
				min = num;
		}
	}
	if (sum > 0)
	{
		printf("%d\n", sum);
		printf("%d\n", min);
	}
	else
		printf("-1\n");
	return 0;
}