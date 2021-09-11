#include<stdio.h>
//baekjoon 3460 ÀÌÁø¼ö
int main()
{
	int T;
	scanf("%d", &T);
	for (int i = 0;i < T;i++)
	{
		int n;
		int cnt = 0;
		scanf("%d", &n);
		while (n > 0)
		{
			if (n % 2 == 1)
				printf("%d ", cnt);
			n /= 2;
			cnt++;
		}
	}
	return 0;
}