#include<stdio.h>
//baekjoon 1193
int main()
{
	int X, position = 1, i;
	scanf("%d", &X);
	for (i = 1;X > position;)
		position += ++i;
	if (i % 2 == 0)
		printf("%d/%d", i - (position - X), 1 + (position - X));
	else
		printf("%d/%d", 1 + (position - X), i - (position - X));
	return 0;
}
#include<stdio.h>
//baekjoon 1193
int main()
{
	int X, cnt = 1, num, den;
	scanf("%d", &X);
	while (X > cnt) 
		X -= cnt++;
	if (cnt % 2 != 0)
	{
		num = cnt; 
		den = 1;
		for (int i = 1;i < X;i++)
		{
			num--;
			den++;
		}
	}
	else
	{
		num = 1; 
		den = cnt;
		for (int i = 1;i < X;i++)
		{
			num++;
			den--;
		}
	}
	printf("%d/%d", num, den);
	return 0;
}