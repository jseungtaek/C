#include<stdio.h>
#include<string.h>
#define MAX 333335
//baekjoon 1212
int main()
{
	char str[MAX];
	char f[10][4] = { "","1","10","11","100","101","110","111" };
	char num[10][4] = { "000","001","010","011","100","101","110","111" };
	scanf("%s", str);

	int len = strlen(str);
	if (str[0] == '0') 
		printf("0");
	else
		printf("%s", f[str[0] - 48]);
	for (int i = 1;i < len;i++)
		printf("%s", num[str[i] - 48]);
	return 0;
}