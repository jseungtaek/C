#include<stdio.h>
//baekjoon 1292
int main()
{
	int A, B, cnt = 0, sum = 0, k = 1, i, j;
	scanf("%d %d", &A, &B);
	for (i = 1;i <= B;)
	{
		for (j = i;j < i + k;j++)
		{
			cnt++;
			if (cnt >= A && cnt <= B)
				sum += k;
		}
		k++;
		i = j;
	}
	printf("%d", sum);
	return 0;
}