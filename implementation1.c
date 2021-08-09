#include<stdio.h>
//baekjoon 2920
int main()
{
	int a, cnt = 0, dis_cnt = 0;
	for (int i = 1;i < 9;i++)
	{
		scanf("%d", &a);
		if (a == i)
			cnt++;
		else if (a == 9 - i)
			dis_cnt++;
	}
	if (cnt == 8) 
		printf("ascending");
	else if (dis_cnt == 8) 
		printf("descending");
	else 
		printf("mixed");
	return 0;
}
