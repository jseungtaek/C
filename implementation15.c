#include<stdio.h>
#include<string.h>
#include<ctype.h>
//baekjoon 2902
int main()
{
	char str[102];
	char copy[102] = { 0 };
	scanf("%s", str);
	int i = 0;
	int j = 0;
	while (str[i] != '\0')
	{
		if (isupper(str[i]))
		{
			copy[j] = str[i];
			j++;
		}
		i++;
	}
	printf("%s", copy);
	return 0;
}
#include<stdio.h>
#include<string.h>
#include<ctype.h>
//baekjoon 2902
int main()
{
	char str[102];
	scanf("%s", str);
	int i = 0;
	while (str[i] != '\0')
	{
		if (isupper(str[i]))
			printf("%c", str[i]);
		i++;
	}
	return 0;
}