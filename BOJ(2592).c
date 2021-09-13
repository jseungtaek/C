#include<stdio.h>
//baekjoon 2592 ´ëÇ¥°ª
int main()
{
	int average = 0, max[101] = { 0 }, num, max_cnt = 0, max_num;
	for (int i = 0;i < 10;i++)
	{
		scanf("%d", &num);
		average += num;
		max[num / 10]++;
	}
	for (int i = 1;i < 101;i++)
	{
		if (max_cnt < max[i])
		{
			max_cnt = max[i];
			max_num = i;
		}
	}
	printf("%d\n%d", average / 10, max_num*10);
	return 0;
}