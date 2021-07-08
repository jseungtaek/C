#include<stdio.h>
//baekjoon 2775
int main()
{
	int array[15][15] = { 0 };
	int T, k, n;

	scanf("%d", &T);


	for (int i = 1;i < 15;i++)
	{
		array[0][i] = i;
		array[i][1] = 1;
	}
	for (int i = 1;i < 15;i++)
	{
		for (int j = 2;j < 15;j++)
		{
			array[i][j] = array[i][j - 1] + array[i - 1][j];
		}
	}
	
	for (int i = 0;i < T;i++)
	{
		scanf("%d%d", &k, &n);
		printf("%d\n", array[k][n]);
	}
	return 0;
}