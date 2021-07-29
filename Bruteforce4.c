#include<stdio.h>
#define minF(a,b) a<b?a:b
//baekjoon 1018
int main()
{
	char chess[50][50];

	int N, M, min = 80, cntB, cntW;

	scanf("%d%d", &N, &M);
	for (int i = 0;i < N;i++)
		scanf("%s", chess[i]);
	for (int i = 0;i < N - 7;i++)
	{
		for (int j = 0;j < M - 7;j++)
		{
			cntB = 0;
			cntW = 0;
			for (int a = i;a < i + 8;a++)
			{
				for (int b = j;b < j + 8;b++)
				{
					if ((a + b) % 2 == 0)
					{
						if (chess[a][b] == 'B')
							cntW++;
						else
							cntB++;
					}
					else
					{
						if (chess[a][b] == 'B')
							cntB++;
						else
							cntW++;
					}
				}
			}
			min = minF(min, cntB);
			min = minF(min, cntW);
		}
	}
	printf("%d\n", min);
	return 0;
}