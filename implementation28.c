#include<stdio.h>
//baekjoon 10162
int main()
{
	int T, a = 0, b = 0, c = 0;
	scanf("%d", &T);
	while (T > 0)
	{
		if (T >= 300)
		{
			a++;
			T -= 300;
		}
		else if (T >= 60)
		{
			b++;
			T -= 60;
		}
		else if (T >= 10)
		{
			c++;
			T -= 10;
		}
		else
		{
			printf("-1");
			break;
		}
	}
	if(T==0) printf("%d %d %d", a, b, c);
	return 0;
}