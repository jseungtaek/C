#include<stdio.h>
#include<ctype.h>
#include<string.h>
void sort_strings(char s[][10], int n);
int main(void)
{
	char s[5][10];
	char str[100];
	char *tok;
	char blank[] = " ";
	int i = 0, j;
	int n = 5;

	printf("5개의 단어를 입력하시오 ");
	gets(str);
	tok = strtok(str, blank);
	while (tok != 0)
	{
		if (i == 5)
			break;
		strcpy(s[i], tok);
		tok = strtok(0, blank);
		i++;
	}
	sort_strings(s, n);

	for (j = 0; j < 5; j++)
		printf("%s ", s[j]);

	return 0;
}
void sort_strings(char s[][10], int n)
{
	int i, j, min = 0;
	char c[10] = { 0 };
	for (i = 0; i < n - 1; i++)
	{
		min = i;
		for (j = i + 1; j < n; j++)
		{
			if (strcmp(s[min], s[j]) > 0)
				min = j;
		}
		strcpy(c, s[i]);
		strcpy(s[i], s[min]);
		strcpy(s[min], c);

	}
}


