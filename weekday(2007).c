#include<stdio.h>
//baekjoon 1924
int main()
{
	int x, y;
	char day[7][4] = { {"SUN"},{"MON"},{"TUE"},{"WED"},{"THU"},{"FRI"},{"SAT"} };
	scanf("%d %d", &x, &y);
	x--;
	while (x > 0)
	{
		if (x % 2 != 0 && x <= 7)
		{
			y += 31;
			x--;
		}
		else if (x % 2 == 0 && (x == 8 || x == 10 || x == 12))
		{
			y += 31;
			x--;
		}
		else if (x == 2)
		{
			y += 28;
			x--;
		}
		else if (x % 2 == 0 && x <= 6)
		{
			y += 30;
			x--;
		}
		else if (x % 2 != 0 && (x == 9 || x == 11))
		{
			y += 30;
			x--;
		}
	}
	y %= 7;
	printf("%s", day[y]);
}
#include<stdio.h>
//baekjoon 1924
int main()
{
	int month[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 }, x, y;
	char day[7][4] = { {"SUN"},{"MON"},{"TUE"},{"WED"},{"THU"},{"FRI"},{"SAT"} };
	scanf("%d%d", &x, &y);
	for (int i = 1;i < x;i++)
		y += month[i-1];
	printf("%s", day[y % 7]);
	return 0;
}