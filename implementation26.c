#include<stdio.h>
//baekjoon 1259
int check(int num[], int num_len)
{
	for (int i = 0;i < num_len / 2;i++)
	{
		if (num[i] == num[num_len - i-1]) continue;
		else
		{
			return 0;
		}
	}
	return 1;
}
int main()
{
	int num;
	int arr[100000], len = 0;
	scanf("%d", &num);
	while (num != 0)
	{
		int i = 0;
		while (num > 0)
		{
			arr[i] = num % 10;
			num /= 10;
			i++;
		}
		if (check(arr, i))
			printf("yes\n");
		else
			printf("no\n");
		scanf("%d", &num);
	}
	return 0;
}