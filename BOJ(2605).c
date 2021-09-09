#include<stdio.h>
//baekjoon 2605 줄 세우기
int main()
{
	int order[101], T, num;
	scanf("%d", &T);
	for (int i = 1;i <= T;i++)
	{
		scanf("%d", &num);
		order[i] = i;
		int k = i;
		while (num > 0)
		{
			int tmp = order[k];
			order[k] = order[k - 1];
			order[k - 1] = tmp;
			k--;
			num--;
		}
	}
	for (int i = 1;i <= T;i++)
		printf("%d ", order[i]);
	return 0;
}