#include<stdio.h>
//baekjoon 1357
int rev(int n)
{
	int num = 0;
	while (n)
	{ 
		num *= 10;
		num += n % 10;
		n /= 10;
	}
	return num;
}
int main()
{
	int a, b;
	scanf("%d%d", &a, &b);
	printf("%d", rev(rev(a) + rev(b)));
	return 0;
}