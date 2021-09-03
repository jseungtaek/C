#include<stdio.h>
//baekjoon 11005
void c(int a, int b)
{
	if (a == 0) return;
	c(a / b, b);
	if (a%b > 9) printf("%c", (a%b)+55);
	else printf("%d", a%b);
}
int main()
{
	int a, b;
	scanf("%d%d", &a,&b);
	c(a, b);
	return 0;
}
