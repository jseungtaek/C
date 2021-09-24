#include<stdio.h>
#include<string.h>
//baekjoon 1225 ÀÌ»óÇÑ °ö¼À
int main()
{
	long long sum = 0;
	char A[10002], B[10002];
	scanf("%s %s", &A, &B);
	for (int i = 0;i < strlen(A);i++)
	{
		for (int j = 0;j < strlen(B);j++)
			sum += ((A[i]-'0') *( B[j]-'0'));
	}
	printf("%lld", sum);
	return 0;
}