#include<stdio.h>
//baekjoon 2960
int arr[1001];
void prime(int arr[], int N,int count)
{
	int cnt = 0;
	for (int i = 2;i <= N;i++)
		arr[i] = i;
	for (int i = 2;i <= N;i++)
	{
		if (arr[i] != 0)
		{
			for (int j = i;j <= N;j+=i)
			{
				if (arr[j] != 0)
				{
					cnt++;
					arr[j] = 0;
				}
				if (cnt == count)
				{
					printf("%d", j);
					break;
				}
			}
		}
	}
}
int main()
{
	int N, K;
	scanf("%d%d", &N, &K);
	prime(arr, N, K);
	return 0;
}