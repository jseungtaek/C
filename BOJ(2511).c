#include<stdio.h>
//baekjoon 2511 Ä«µå³îÀÌ
int a[10], b[10], a_cnt, b_cnt, flag;
void card(int a[])
{
	for (int i = 0;i < 10;i++)
		scanf("%d", &a[i]);
}
void card_c(int a[],int b[])
{
	for (int i = 0;i < 10;i++)
	{
		if (a[i] > b[i])
		{
			a_cnt += 3;
			flag = 1;
		}
		else if (a[i] < b[i])
		{
			b_cnt += 3;
			flag = 2;
		}
		else
		{
			a_cnt++;
			b_cnt++;
		}
	}
	printf("%d %d\n", a_cnt, b_cnt);
	if (a_cnt > b_cnt)
		printf("A");
	else if (a_cnt < b_cnt)
		printf("B");
	else if (a_cnt == b_cnt)
	{
		if (flag == 1)
			printf("A");
		else if (flag == 2)
			printf("B");
		else
			printf("D");
	}
		
}
int main()
{
	card(a);
	card(b);
	card_c(a, b);
	return 0;
}