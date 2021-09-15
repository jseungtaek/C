#include<stdio.h>
#include<math.h>
//baekjoon 2693 N번째 큰 수
int compare(const void *a, const void *b)
{
	if (*(int*)a < *(int*)b) return 1;
	else if (*(int*)a > *(int*)b) return -1;
	else return 0;
}
int main()
{
	int num[10], T;
	scanf("%d", &T);
	for (int i = 0;i < T;i++)
	{
		for (int i = 0;i < 10;i++)
			scanf("%d", &num[i]);
		qsort(num, 10, sizeof(int), compare);
		printf("%d\n", num[2]);
	}
	return 0;
}