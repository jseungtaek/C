#include<stdio.h>
#include<string.h>
//baekjoon 10926
int main()
{
	char A[52], B[52];
	scanf("%s %s", A, B);
	int min = strlen(B);
	for (int i = 0;i <= strlen(B) - strlen(A);i++)
	{
		int cnt = 0, k = 0;
		for (int j = i;j < i + strlen(A);j++)
		{
			if (A[k] != B[j]) cnt++;
			k++;
		}
		if (min > cnt)
			min = cnt;
	}
	printf("%d", min);
	return 0;
}