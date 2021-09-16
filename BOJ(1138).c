#include<stdio.h>
//baekjoon 1138 한 줄로 서기
int line[10];
int main()
{
	int N;
	scanf("%d", &N);
	for (int i = 0;i < N;i++)
	{
		int left;
		scanf("%d", &left);
		for (int j = 0;j < N;j++)
		{
			if (left == 0 && line[j] == 0)
			{
				line[j] = i + 1;
				break;
			}
			else if (line[j] == 0)
				left--;
		}
	}
	for (int i = 0;i < N;i++)
		printf("%d ", line[i]);
	return 0;
}