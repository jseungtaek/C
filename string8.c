#include<stdio.h>
#include<string.h>
#define MAX 101
//baekjoon 2941

int main()
{
	char str[MAX];
	int cnt = 0;
	scanf("%s", str);
	for (int i = 0;i < strlen(str);)
	{
		if ((str[i] == 'c' && (str[i + 1] == '=' || str[i + 1] == '-'))||(str[i]=='d'&&str[i+1]=='-')||(str[i]=='l'&&str[i+1]=='j')||(str[i] == 'n'&&str[i + 1] == 'j')||(str[i] == 's'&&str[i + 1] == '=')|| str[i] == 'z'&&str[i + 1] == '=')
		{
			i += 2;
			cnt++;
		}
		else if (str[i] == 'd'&&str[i + 1] == 'z'&&str[i + 2] == '=')
		{
			i += 3;
			cnt++;
		}
		else
		{
			i++;
			cnt++;
		}
	}
	printf("%d", cnt);
	return 0;
}