#include<stdio.h>
//baekjoon 10250
int main()
{
	int T, H, W, N, cnt = 1, i, j, k;
	
	scanf("%d", &T);
	for (k = 0;k < T;k++)
	{
		scanf("%d%d%d", &H, &W, &N);
		if (N&H == 0) printf("%d%02d\n", H, N / H);
		else printf("%d%02d\n", N%H, N / H + 1);
	}
	return 0;
}