#include<stdio.h>
#include<string.h>
#define MAX 52
//baekjoon 1032
char dir[MAX][MAX];
char answer[MAX];
int main()

{
	int N, len;
	
	scanf("%d", &N);
	for (int i = 0;i < N;i++)
		scanf("%s", dir[i]);
	len = strlen(dir[0]);
	for (int j = 0;j < len;j++)
	{
		for (int i = 1;i < N;i++)
		{
			if (dir[i][j] != dir[i - 1][j])
			{
				answer[j] = '?';
				break;
			}
			else
				answer[j] = dir[i][j];
		}
	}
	if (N == 1)
		printf("%s", dir[0]);
	printf("%s", answer);
	return 0;
}