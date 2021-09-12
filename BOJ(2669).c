#include<stdio.h>
//baekjoon 2669 직사각형 네개의 합집합
int main()
{
	int x1, y1, x2, y2, square[101][101] = { 0 }, sum = 0;
	for (int i = 0;i < 4;i++)
	{
		scanf("%d%d%d%d", &x1, &y1, &x2, &y2);
		for (int j = x1;j < x2;j++)
		{
			for (int k = y1;k < y2;k++)
				square[j][k] = 1;
		}
	}
	for (int i = 0;i < 101;i++)
	{
		for (int j = 0;j < 101;j++)
			if (square[i][j] == 1) sum++;
	}
	printf("%d", sum);
	return 0;
}
//한 칸의 넓이가 1임을 이용