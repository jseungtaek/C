#include<stdio.h>
#define size 7

struct Card
{
	int number;
	char pattern;
};
int main()
{
	struct Card list[size];
	int i, j, cnt1 = 0, cnt2 = 0, cnt3 = 0, cnt4 = 0;

	printf("카드를 입력하시오.");
	
	for (i = 0;i < size;i++)
	{
		scanf("%d", &list[i].number);
		scanf("%s", &list[i].pattern);
	}
	for (i = 0;i < size;i++)
	{
		for (j = i+1;j < size;j++)
		{
			if (list[i].pattern == list[j].pattern && list[i].pattern == 's')
				cnt1++;
			if (list[i].pattern == list[j].pattern && list[i].pattern == 'd')
				cnt2++;
			if (list[i].pattern == list[j].pattern && list[i].pattern == 'h')
				cnt3++;
			if (list[i].pattern == list[j].pattern && list[i].pattern == 'c')
				cnt4++;
		}
	}
	if (cnt1 >= 5)
		printf("Yes");
	else if (cnt2 >= 5)
		printf("Yes");
	else if (cnt3 >= 5)
		printf("Yes");
	else if (cnt4 >= 5)
		printf("Yes");
	else
		printf("No");

	return 0;
}