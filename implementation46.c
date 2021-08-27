#include<stdio.h>
#include<string.h>
//baekjoon 7567
int main()
{
	char plate[52];
	int height = 10;
	scanf("%s", plate);
	int len = strlen(plate);
	for (int i = 1;i < len;i++)
	{
		if (plate[i - 1] == plate[i])
			height += 5;
		else
			height += 10;
	}
	printf("%d", height);
	return 0;
}