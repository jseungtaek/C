#include<stdio.h>
#include<string.h>
//baekjoon 9086 ¹®ÀÚ¿­
int main()
{
	char str[1002];
	int T;
	scanf("%d", &T);
	for (int i = 0;i < T;i++)
	{
		scanf("%s", str);
		printf("%c%c\n", str[0], str[strlen(str) - 1]);
	}
	return 0;
}