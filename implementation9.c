#include<stdio.h>
//baekjoon 1475
int main()
{
	int N, set = 0, cnt = 0, arr[10] = { 0 };
	scanf("%d", &N);
	while (1)
	{
		arr[N % 10]++;
		N /= 10;
		if (N <= 0)
			break;
	}
	cnt = (arr[6] + arr[9] + 1) / 2; 
	for (int i = 0;i < 10;i++)
	{
		if (i != 6 && i != 9)
		{
			if (arr[i] > cnt)
				cnt = arr[i];
		}
	}
	printf("%d", cnt);
	return 0;
}