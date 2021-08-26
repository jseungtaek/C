#include<stdio.h>
#include<string.h>
#include<ctype.h>
//baekjoon 10820
int main()
{
	char str[102];
	
	while (gets(str) != '\0')
	{
		int lower=0, upper=0, digit=0, space=0;
		int len = strlen(str);
		for (int i = 0;i < len;i++)
		{
			if (islower(str[i]))
				lower++;
			else if (isupper(str[i]))
				upper++;
			else if (isdigit(str[i]))
				digit++;
			else if (isspace(str[i]))
				space++;
		}
		printf("%d %d %d %d\n", lower, upper, digit, space);
	}
	return 0;
}