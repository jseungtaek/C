#include<stdio.h>
//baekjoon 10804 카드 역배치
void re(int arr[], int first, int last)
{
	int a = 0;
	for (int i = first;i <= (first+last)/2;i++)
	{
		int tmp = arr[i];
		arr[i] = arr[last-a];
		arr[last-a] = tmp;
		a++;
	}
}
int main()
{
	int arr[21], a, b;
	for (int i = 1;i < 21;i++)
		arr[i] = i;
	for (int i = 0;i < 10;i++)
	{
		scanf("%d %d", &a, &b);
		re(arr, a, b);
	}
	for (int i = 1;i < 21;i++)
		printf("%d ", arr[i]);
	return 0;
}