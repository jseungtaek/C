#include<stdio.h>
#include<string.h>
//baekjoon 10988
int main()
{
	char str[102];
	int flag = 1;
	scanf("%s", str);
	for (int i = 0;i < strlen(str) / 2;i++)
	{;
		if (str[i] != str[strlen(str) - i - 1])
		{
			flag = 0;
			break;
		}
	}
	if (flag == 0) printf("0");
	else printf("1");
	return 0;
}