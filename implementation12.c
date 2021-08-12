#include<stdio.h>
#include<math.h>
//baekjoon 1009
int main()
{
	int n, a, b, a1;
	scanf("%d", &n);
	for (int i = 0;i < n;i++)
	{
		scanf("%d%d", &a, &b);
		a1 = 1;
		for (int j = 0;j < b;j++)
		{
			a1 *= a;
			a1 %= 10;
		}
		if (a1 == 0)
			a1 = 10;
		printf("%d\n", a1);
	}
	return 0;
}