#include<stdio.h>
#include<string.h>
//baekjoon 5598 카이사르 암호
int main()
{
	char str[1002];
	scanf("%s", str);
	for (int i = 0;i < strlen(str);i++)
	{
		str[i] = str[i] - 3;
		if (str[i] < 65)
			str[i] += 26;
		printf("%c", str[i]);
	}
	return 0;
}