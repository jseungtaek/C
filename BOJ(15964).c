#include<stdio.h>
//baekjoon 15964 �̻��� ��ȣ
int main()
{
	long long A, B;
	scanf("%lld%lld", &A, &B);
	printf("%lld", (A + B)*(A - B));
	return 0;
}