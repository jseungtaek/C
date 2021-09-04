#include<stdio.h>
#include<string.h>
#include<ctype.h>
#define MAX 100002
//baekjoon 17413
int top = -1;
char data[MAX];
char str[MAX];
char empty() { return top == -1; }
void push(char e)
{
	data[++top] = e;
}
char pop()
{
	return data[top--];
}
int main()
{
	int i, j;
	gets(str);
	str[strlen(str)] = ' ';
	for (i = 0;i <= strlen(str);i++)
	{
		if (str[i] == '<')
		{
			while (!empty())
				printf("%c", pop());
			for (j = i;str[j] != '>';j++)
			{
				push(str[j]);
				printf("%c", pop());
			}
			push(str[j]);
			printf("%c", pop());
			i = j;
		}
		if (isalpha(str[i])||isdigit(str[i]))
		{
			push(str[i]);
		}
		else if (isspace(str[i]))
		{
			while (!empty())
				printf("%c", pop());
			printf(" ");
		}
	}
	while (!empty())
		printf("%c", pop());
	return 0;
}