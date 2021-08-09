#include<stdio.h>
#include<math.h>
//baekjoon 2475
int main()
{
	int n, sum = 0;
	for (int i = 0;i < 5;i++)
	{
		scanf("%d", &n);
		sum += pow(n,2);
	}
	printf("%d", sum % 10);
	return 0;
}