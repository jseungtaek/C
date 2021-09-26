#include<stdio.h>
//baekjoon 1568 »õ
int main()
{
	int N, cnt = 0, i = 1;
	scanf("%d", &N);
	while (N > 0)
	{
		if (N < i)
			i = 1;
		N -= i;
		cnt++;
		i++;
	}
	printf("%d", cnt);
	return 0;
}