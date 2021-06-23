#include<stdio.h>
//baekjoon 11720
int main()
{
	int N;
	int sum = 0;
	char array[101];

	scanf("%d", &N);
	scanf("%s", array);
	for (int i = 0;i < N;i++)
	{
		sum += array[i] - '0';
	}
	
	printf("%d", sum);
	return 0;
}