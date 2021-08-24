#include<stdio.h>
//baekjoon 2845
int person[5][1];
int main()
{
	int L, P;
	scanf("%d %d", &L, &P);
	for (int i = 0;i < 5;i++)
	{
		scanf("%d", &person[i]);
		printf("%d ", (person[i][0]- L * P));
	}
	return 0;
}