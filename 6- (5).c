#include <string.h>
#include <stdio.h>

int main(void)
{
	int is_first = 1;
	char s[101];
	char *token;
	char longest[101];

	printf("영어 문장을 입력하시오 : ");
	gets(s);

	token = strtok(s, " ");
	while (token != NULL)
	{
		if (is_first)
		{ 
			is_first = 0;
			strcpy(longest, token);
		}

		else
		{
			if (strlen(longest) <= strlen(token))
				strcpy(longest, token);
		}
		
		token = strtok(NULL, " ");
	}

	printf("%s", longest);

	return 0;
}