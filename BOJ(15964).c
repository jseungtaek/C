#include<stdio.h>
//baekjoon 15964 이상한 기호
int main()
{
	long long A, B;
	scanf("%lld%lld", &A, &B);
	printf("%lld", (A + B)*(A - B));
	return 0;
}