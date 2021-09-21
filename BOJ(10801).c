#include<stdio.h>
//baekjoon 10801 카드게임
int main()
{
	int A[10], B[10], cnt_A = 0, cnt_B = 0;
	for (int i = 0;i < 10;i++)
		scanf("%d", &A[i]);
	for (int i = 0;i < 10;i++)
	{
		scanf("%d", &B[i]);
		if (A[i] > B[i])
			cnt_A++;
		else if (B[i] > A[i])
			cnt_B++;
	}
	if (cnt_A > cnt_B) printf("A");
	else if (cnt_A < cnt_B) printf("B");
	else printf("D");
	return 0;
}