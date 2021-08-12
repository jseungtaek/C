#include<stdio.h>
//baekjoon 10797
int main()
{
	int day, car, cnt = 0;
	scanf("%d", &day);
	day %= 10;
	for (int i = 0;i < 5;i++)
	{
		scanf("%d", &car);
		if (car == day)
			cnt++;
	}
	printf("%d", cnt);
	return 0;
}