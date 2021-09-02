#include<stdio.h>
//baekjoon 15953
int main()
{
	int a[6] = { 500,300,200,50,30,10 }, b[5] = { 512,256,128,64,32 }, T, sum = 0, A, B;
	scanf("%d", &T);
	for (int i = 0;i < T;i++)
	{
		scanf("%d %d", &A, &B);
		if (A == 0)
			sum += 0;
		else if (A < 2)
			sum += a[0];
		else if (A < 4)
			sum += a[1];
		else if (A < 7)
			sum += a[2];
		else if (A < 11)
			sum += a[3];
		else if (A < 16)
			sum += a[4];
		else if (A < 22)
			sum += a[5];
		if (B == 0)
			sum += 0;
		else if (B < 2)
			sum += b[0];
		else if (B < 4)
			sum += b[1];
		else if (B < 8)
			sum += b[2];
		else if (B < 16)
			sum += b[3];
		else if (B < 32)
			sum += b[4];
		printf("%d\n", sum*10000);
		sum = 0;
	}
	return 0;
}
#include<stdio.h>
//baekjoon 15953
int money_check(int arr[], int rank_arr[], int ranking,int num)
{
	int cnt = 0;
	int sum = 0;
	if (ranking > 0 && ranking < num)
	{
		while (ranking > 0)
		{
			ranking -= rank_arr[cnt++];
			sum = arr[cnt - 1];
		}
	}
	return sum;
}
int main()
{
	int T, a, b;
	int arr1[6] = { 500,300,200,50,30,10 }, arr2[5] = { 512,256,128,64,32 }, rank_arr1[6] = { 1, 2, 3, 4, 5, 6 }, rank_arr2[5] = { 1,2,4,8,16 };
	scanf("%d", &T);
	for (int i = 0;i < T;i++)
	{
		int reward = 0;
		scanf("%d %d", &a, &b);
		reward += money_check(arr1, rank_arr1, a, 22);
		reward += money_check(arr2, rank_arr2, b, 32);
		printf("%d\n", reward * 10000);
	}
}