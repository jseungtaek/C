#include<stdio.h>
//baekjoon 5554
int main()
{
	int min = 0, sec = 0, time;
	for (int i = 0;i < 4;i++)
	{
		scanf("%d", &time);
		sec += time;
		while(sec >= 60)
		{
			min++;
			sec -= 60;
		}
	}
	printf("%d\n%d", min, sec);
	return 0;
}