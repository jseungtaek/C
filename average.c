#include<stdio.h>
//baekjoon 10039

int main()
{
	int sum = 0, n;
	for (int i = 0;i < 5;i++)
	{
		scanf("%d", &n);
		if (n < 40)
			n = 40;
		sum += n;
	}
	printf("%d", sum / 5);
	return 0;
}