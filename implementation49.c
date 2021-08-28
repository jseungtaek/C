#include<stdio.h>
//baekjoon 5597
int main()
{
	int st[31] = { 0 }, not_submit;

	for (int i = 0;i < 28;i++)
	{
		scanf("%d", &not_submit);
		st[not_submit] = 1;
	}
	for (int i = 1;i < 31;i++)
		if (st[i] != 1) printf("%d\n", i);
	return 0;
}