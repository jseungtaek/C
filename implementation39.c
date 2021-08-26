#include<stdio.h>
#include<ctype.h>
#include<string.h>
//baekjoon 11655
void ROT13(char str[], int len)
{
	for (int i = 0;i < len;i++)
	{
		if (isalpha(str[i]))
		{
			if (islower(str[i]))
			{
				if (str[i] + 13 > 122)
					printf("%c", str[i] + 13 - 26);
				else
					printf("%c", str[i] + 13);
			}
			else if (isupper(str[i]))
			{
				if (str[i] + 13 > 90)
					printf("%c", str[i] + 13 - 26);
				else
					printf("%c", str[i] + 13);
			}
		}
		else
			printf("%c", str[i]);
	}
}
int main()
{
	char str[101];
	gets(str);
	int len = strlen(str);
	ROT13(str, len);
	return 0;
}