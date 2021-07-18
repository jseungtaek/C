#include<stdio.h>
//baekjoon 3009
int main()
{
	int x0, x1, x2, x3, y0, y1, y2, y3;

	scanf("%d%d%d%d%d%d", &x0, &y0, &x1, &y1, &x2, &y2);
	
	if (x0 == x1)
	{
		x3 = x2;
	}
	else if (x1 == x2)
	{
		x3 = x0;
	}
	else 
	{
		x3 = x1;
	}
	if (y0 == y1)
	{
		y3 = y2;
	}
	else if (y1 == y2)
	{
		y3 = y0;
	}
	else
	{
		y3 = y1;
	}
	printf("%d %d", x3, y3);
	return 0;
}