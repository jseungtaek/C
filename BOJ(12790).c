#include<stdio.h>
//baekjoon 12790 Mini Fantasy War
int main()
{
	int hp, mp, at, df, hp_e, mp_e, at_e, df_e, T;
	scanf("%d", &T);
	for (int i = 0;i < T;i++)
	{
		scanf("%d%d%d%d%d%d%d%d", &hp, &mp, &at, &df, &hp_e, &mp_e, &at_e, &df_e);
		if (hp + hp_e < 1)
		{
			hp = 1;
			hp_e = 0;
		}
		if (mp + mp_e < 1)
		{
			mp = 1;
			mp_e = 0;
		}
		if (at + at_e < 1)
		{
			at = 0;
			at_e = 0;
		}
		printf("%d\n", (hp + hp_e) + 5 * (mp + mp_e) + 2 * (at + at_e + df + df_e));
	}
	return 0;
}