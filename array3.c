#include<stdio.h>
//baekjoon 1546
int main()
{
	int N;
	int array[1000];
	double average = 0;
	scanf("%d", &N);
	double max = 0;
	for (int i = 0;i < N;i++)
	{
		scanf("%d", &array[i]);
		if (max < array[i])
			max = array[i];
	}
	for (int i = 0;i < N;i++)
		average += (double)array[i] / max * 100;
	printf("%g", average / (double)N);
	return 0;
}
