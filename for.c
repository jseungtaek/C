#include<stdio.h>
//boostcamp web mobile 자가진단 6 solve
int main()
{
	int array[100];
	int K, cnt = 0, flag = 0;
	int num = 0;
	int score[100] = { 0 };
	scanf("%d",&K);
	for (int i = 0;i < K;i++) scanf("%d", &array[i]);
	for (int i = 1;i <= 100;i++)
	{
		for (int j = 0;j < K;j++)
		{
			if (i == array[j])
			{
				cnt++;
				score[num] = cnt;
			}
		}
		num++;
		cnt = 0;
	}
	for (int i = 0;i < num;i++)
	{
		if (score[i] > 1)
		{
			printf("%d\n", score[i]);
			flag = 1;
		}
	}
	if (flag == 0) printf("-1");
	return 0;
}