#include<stdio.h>
//baekjoon 3052
int main()
{
	int array[10];
	int leftover[10];
	int count = 0, result = 0;
	for (int i = 0;i < 10;i++)
	{
		scanf("%d", &array[i]);
		leftover[i] = array[i] % 42;
	}
	for (int i = 0;i < 10;i++)
	{
		for (int j = 0;j < i;j++)
		{
			if (leftover[i] == leftover[j]) count++;
		}
		if (count == 0) result++;
		count = 0;
	}
	printf("%d\n", result);
	return 0;
}
