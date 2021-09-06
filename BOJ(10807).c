#include<stdio.h>
//baekjoon 10807 개수 세기
int main()
{
	int arr[101], T, cnt = 0, num;
	scanf("%d", &T);
	for (int i = 0;i < T;i++)
		scanf("%d", &arr[i]);
	scanf("%d", &num);
	for (int i = 0;i < T;i++)
	{
		if (num == arr[i]) cnt++;
	}
	printf("%d", cnt);
	return 0;
}