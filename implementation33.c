#include<stdio.h>
#include<string.h>
#include<ctype.h>
//baekjoon 10798
char str1[16], str2[16], str3[16], str4[16], str5[16];
int main()
{
	
	scanf("%s%s%s%s%s", str1, str2, str3, str4, str5);
	int len = strlen(str1);
	len = len < strlen(str2) ? strlen(str2) : len;
	len = len < strlen(str3) ? strlen(str3) : len;
	len = len < strlen(str4) ? strlen(str4) : len;
	len = len < strlen(str5) ? strlen(str5) : len;
	for (int i = 0;i < len;i++)
	{
		if (isdigit(str1[i]) || isalpha(str1[i]))
			printf("%c", str1[i]);
		if (isdigit(str2[i]) || isalpha(str2[i]))
			printf("%c", str2[i]);
		if (isdigit(str3[i]) || isalpha(str3[i]))
			printf("%c", str3[i]);
		if (isdigit(str4[i]) || isalpha(str4[i]))
			printf("%c", str4[i]);
		if (isdigit(str5[i]) || isalpha(str5[i]))
			printf("%c", str5[i]);
	}

	return 0;
}
#include<stdio.h>
#include<string.h>
#include<ctype.h>
#define MAX 16
//baekjoon 10798
char str[5][MAX];
int main()
{
	for (int i = 0;i < 5;i++)
		scanf("%s", str[i]);
	for (int i = 0;i < MAX;i++)
	{
		for (int j = 0;j < 5;j++)
		{
			if (str[j][i] != NULL)
				printf("%c", str[j][i]);
		}
	}
	return 0;
}

