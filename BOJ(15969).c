#include<stdio.h>
//baekjoon 15969 วเบน
int main()
{
	int min = 1000, max = 0, score, N;
	scanf("%d", &N);
	for (int i = 0;i < N;i++)
	{
		scanf("%d", &score);
		if (max < score)
			max = score;
		if(min>score)
			min = score;
	}
	printf("%d", max - min);
	return 0;
}