#include<stdio.h>
//baekjoon 1453 피시방 알바
int main()
{
	int num[101] = { 0 }, guest, reject = 0, N;
	scanf("%d", &N);
	for (int i = 0;i < N;i++)
	{
		scanf("%d", &guest);
		num[guest]++;
		if (num[guest] > 1)
			reject++;
	}
	printf("%d", reject);
	return 0;
}