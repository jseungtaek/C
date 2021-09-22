#include<stdio.h>
#define max 100001
//baekjoon 17608 ¸·´ë±â
int main()
{
	int N, stick[max], cnt = 1, top;
	scanf("%d", &N);
	for (int i = 0;i < N;i++)
	{
		scanf("%d", &stick[i]);
	}
	top = stick[N - 1];
	for (int i = N-1;i >= 0;i--)
	{
		if (top < stick[i])
		{
			cnt++;
			top = stick[i];
		}
	}
	printf("%d", cnt);
	return 0;
}