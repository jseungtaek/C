#include<stdio.h>
//baekjoon 1547
int main()
{
	int cup[3] = { 1, }, tmp, M, c1, c2, ball = 1;
	scanf("%d", &M);
	for (int i = 0;i < M;i++)
	{
		scanf("%d %d", &c1, &c2);
		if (c1 == ball || c2 == ball)
		{
			tmp = cup[c1 - 1];
			cup[c1 - 1] = cup[c2 - 1];
			cup[c2 - 1] = tmp;
			if (c1 != ball) ball = c1;
			else ball = c2;
		}
	}
	for (int i = 0;i < 3;i++)
	{
		if (cup[i] == 1) printf("%d", i+1);
	}
	return 0;
}