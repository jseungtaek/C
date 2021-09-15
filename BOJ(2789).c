#include<stdio.h>
#include<string.h>
//baekjoon 2789 유학 금지
int main()
{
	char str[101];
	scanf("%s", str);
	for (int i = 0;i < strlen(str);i++)
	{
		if (str[i] == 'C' || str[i] == 'A' || str[i] == 'M' || str[i] == 'B' || str[i] == 'R' || str[i] == 'I' || str[i] == 'D' || str[i] == 'G' || str[i] == 'E') continue;
		else
			printf("%c", str[i]);
	}
	return 0;
}