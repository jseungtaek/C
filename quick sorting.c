#include<stdio.h>
#define MAX 1000000
//baekjoon 2751
int array[MAX];
int compare(const void *a, const void *b)
{
	if (*(int*)a > *(int*)b)
		return 1;
	else if (*(int*)a < *(int*)b)
		return -1;
	else
		return 0;
}
int main()
{
	int N;
	scanf("%d", &N);
	for (int i = 0;i < N;i++)
	{
		scanf("%d", &array[i]);
	}
	qsort(array, N, sizeof(int), compare);
	for (int i = 0;i < N;i++)
		printf("%d\n", array[i]);
	return 0;
}