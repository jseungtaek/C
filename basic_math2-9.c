#include<stdio.h>
//baekjoon 4153
int main()
{
	int a, b, c, tmp;

	while (1)
	{
		scanf("%d%d%d", &a, &b, &c);
		if (a == 0 || b == 0 || c == 0) break;
		if (a > c)
		{
			tmp = a;
			a = c;
			c = tmp;
		}
		if (b > c)
		{
			tmp = b;
			b = c;
			c = tmp;
		}
		if (c*c == a * a + b * b)
			printf("right\n");
		else
			printf("wrong\n");
	}
	return 0;
}