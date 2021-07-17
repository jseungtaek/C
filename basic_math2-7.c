#include<stdio.h>
//baekjoon 1085
int main()
{
	int x, y, w, h, min = 1001, i = 4;

	scanf("%d%d%d%d", &x, &y, &w, &h);

	while(1)
	{
		if (min > x)
			min = x;
		if (min > y)
			min = y;
		if (min > w - x)
			min = w - x;
		if (min > h - y)
			min = h - y;
		break;
	}
	printf("%d", min);
	return 0;
}