#include<stdio.h>
#include<string.h>
#include<ctype.h>
//baekjoon 5596 시험 점수
int main()
{
	int a, min = 0, man = 0;
	for (int i = 0;i < 8;i++)
	{
		scanf("%d", &a);
		if (i < 4)
			min += a;
		else
			man += a;
	}
	printf("%d", min > man ? min : man);
return 0;
}