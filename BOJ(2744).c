#include<stdio.h>
#include<string.h>
#include<ctype.h>
//baekjoon 2744 대소문자 바꾸기
int main()
{
	char str[102];
	scanf("%s", str);
	for (int i = 0;i < strlen(str);i++)
	{
		if (islower(str[i]))
			str[i] -= 32;
		else
			str[i] += 32;
		printf("%c", str[i]);
	}
	return 0;
}