#include<stdio.h>
#include<ctype.h>
#include<string.h>

struct person
{
	char name[10];
	int money;
};
int main()
{
	struct person list[10];
	int n, i, j, m = 0, min = 0;
	double avg = 0;
	char str[10] = { 0 };
	int cnt = 0;
	struct person tmp;
	
	printf("사람의 수(최대10명)를 입력하고, 이름과 소지금을 입력하시오.");
	scanf("%d", &n);
	
	for (i = 0;i < n;i++)
	{
		scanf("%s", list[i].name);
		scanf("%d", &list[i].money);
		avg += list[i].money;
	}
	avg /= (double)n;

	for (i = 0;i < n;i++)
	{
		min = i;
		for (j = i;j < n;j++)
			if (strcmp(list[min].name, list[j].name) > 0)
				min = j;
		tmp = list[min];
		list[min] = list[i];
		list[i] = tmp;
	}
	for (i = 0;i < n;i++)
	{
		if (list[i].money >= avg)
			printf("%s ", list[i].name);
	}
	
		

	return 0;
}