#include<stdio.h>
//baekjoon 2953
int main()
{
	int a, b, c, d, sum = 0, arr[5], max = 0, max_num = 0;

	for (int i = 0;i < 5;i++)
	{
		scanf("%d%d%d%d", &a, &b, &c, &d);
		sum = a + b + c + d;
		arr[i] = sum;
	}
	for (int j = 0;j < 5;j++)
	{
		if (max < arr[j])
		{
			max = arr[j];
			max_num = j + 1;
		}
	}
	printf("%d %d", max_num, max);
	return 0;
}