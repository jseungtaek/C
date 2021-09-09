#include<stdio.h>
#include<string.h>
//baekjoon 1652 누울 자리를 찾아라
int main()
{
	int N, cnt_x = 0, cnt_y = 0, x_cnt = 0, y_cnt = 0;
	char room[102][102] = { NULL };
	scanf("%d", &N);
	for (int i = 0;i < N;i++)
		scanf("%s", room[i]);

	for (int i = 0;i < N;i++)
	{
		for (int j = 0;j < N;j++)
		{
			if (room[i][j] != 'X')
				cnt_x++;
			else
			{
				if (cnt_x >= 2)
					x_cnt++;
				cnt_x = 0;
			}
			if (room[i][j + 1] == NULL && cnt_x >= 2)
				x_cnt++;
			if (room[j][i] != 'X')
				cnt_y++;
			else
			{
				if (cnt_y >= 2)
					y_cnt++;
				cnt_y = 0;
			}
			if (room[j + 1][i] == NULL && cnt_y >= 2)
				y_cnt++;
		}
		cnt_x = cnt_y = 0;
	}
	printf("%d %d", x_cnt, y_cnt);
	return 0;
}