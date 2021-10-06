#include<stdio.h>
//baekjoon 5575 타임 카드
int main()
{
	int s_h, s_m, s_s, f_h, f_m, f_s;
	for (int i = 0;i < 3;i++)
	{
		scanf("%d%d%d%d%d%d", &s_h, &s_m, &s_s, &f_h, &f_m, &f_s);
		if (s_s > f_s)
		{
			if (f_m > 0)
			{
				f_m--;
				f_s += 60;
			}
			else
			{
				f_h--;
				f_m += 59;
				f_s += 60;
			}
		}
		if (s_m > f_m)
		{
			f_h--;
			f_m += 60;
		}
		printf("%d %d %d\n", f_h - s_h, f_m - s_m, f_s - s_s);
	}
	return 0;
}