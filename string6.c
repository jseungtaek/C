#include<stdio.h>
#include<string.h>
#include<ctype.h>
//baekjoon 2908 1
int main()
{
	char str[1000005];
	int str_length, j = 0, k = 0;
	int flag = 0;
	char a[4] = { 0 };
	char b[4] = { 0 };
	scanf("%[^\n]", str); //%[^\n] 엔터가 나올때까지 문자열로 받음
	str_length = strlen(str);
	for (int i = str_length - 1;i >= 0;i--)
	{
		if (isdigit(str[i]) && flag == 0)
		{
			a[j] = str[i];
			j++;
		}
		if (isspace(str[i]))
			flag = 1;
		if (isdigit(str[i]) && flag == 1)
		{
			b[k] = str[i];
			k++;
		}
	}
	if (a[0] > b[0])
	{
		for (int i = 0;i < 3;i++)
			printf("%c", a[i]);
	}
	else if (a[0] < b[0])
	{
		for (int i = 0;i < 3;i++)
			printf("%c", b[i]);
	}
	else if (a[0] == b[0] && a[1] > b[1])
	{
		for (int i = 0;i < 3;i++)
			printf("%c", a[i]);
	}
	else if (a[0] == b[0] && a[1] < b[1])
	{
		for (int i = 0;i < 3;i++)
			printf("%c", b[i]);
	}
	else if (a[0] == b[0] && a[1] == b[1] && a[2] > b[2])
	{
		for (int i = 0;i < 3;i++)
			printf("%c", a[i]);
	}
	else if (a[0] == b[0] && a[1] == b[1] && a[2] < b[2])
	{
		for (int i = 0;i < 3;i++)
			printf("%c", b[i]);
	}
	else
	{
		for (int i = 0;i < 3;i++)
			printf("%c", a[i]);
	}
	
	return 0;
}
#include<stdio.h>
#include<string.h>
#include<ctype.h>
//baekjoon 2908 2
int main()
{
	char numA[4];
	char numB[4];
	int flag = 0;

	scanf("%s%s", numA, numB);

	for (int i = strlen(numA)-1;i >= 0;i--)
	{
		if (numA[i] > numB[i])
		{
			flag = 1;
			break;
		}
		else if (numA[i] == numB[i])
			continue;
		else
		{
			flag = -1;
			break;
		}
	}
	if (flag==1)
	{
		for (int i = strlen(numA) - 1;i >= 0;i--) printf("%c", numA[i]);
	}
	else
	{
		for (int i = strlen(numB) - 1;i >= 0;i--) printf("%c", numB[i]);
	}
	return 0;
}