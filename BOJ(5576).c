#include<stdio.h>
#include<math.h>
//baekjoon 5576 콘테스트
int compare(const void *a, const void *b)
{
	if (*(int*)a < *(int*)b) return 1;
	else if (*(int*)a > *(int*)b) return -1;
	else return 0;
}
int main()
{
	int K[10], W[10], j = 0;
	for (int i = 0;i < 20;i++)
	{
		if (i < 10)
			scanf("%d", &W[i]);
		else 
		{
			scanf("%d", &K[j]);
			j++;
		}
	}
	qsort(W, 10, sizeof(int), compare);
	qsort(K, 10, sizeof(int), compare);
	printf("%d %d", W[0] + W[1] + W[2], K[0] + K[1] + K[2]);
	return 0;
}