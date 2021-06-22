#include<stdio.h>
#include<string.h>

//baekjoon 4673
int not_self_num(int n);

int not_self_num(int n)
{
	int sum = n;
	while (n > 0)
	{
		sum += n % 10;
		n /= 10;
	}
	return sum;
}
int main()
{
	int i, num;
	int array[10001] = { 0 };
	for (i = 1;i <= 10000;i++)
	{
		num = not_self_num(i);
		if (num < 10001)
		{
			array[num] = 1;
		}
	}
	for (i = 1;i <= 10000;i++)
	{
		if (array[i] != 1) printf("%d\n", i);
	}
	return 0;
}
