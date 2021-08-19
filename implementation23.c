#include<stdio.h>
//baekjoon 5565
int main()
{
	int total, book, sum = 0;
	scanf("%d", &total);
	for (int i = 0;i < 9;i++)
	{
		scanf("%d", &book);
		sum += book;
	}
	printf("%d", total - sum);
	return 0;
}