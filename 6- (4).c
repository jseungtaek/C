#include<stdio.h>
#include<string.h>

#define size 101

void replaceAll(char *s, char *regex, char *replacement);
int main(void)
{
	char str[size], word[size], replace[size];

	printf("문자열을 입력하시오.\n");
	gets(str);
	printf("입력된 문자열에서 바꾸고 싶은 문자열을 입력하시오.\n");
	gets(word);
	printf("바꾸고 싶은 문자열이 바뀔 문자열을 입력하시오.\n");
	gets(replace);

	replaceAll(str, word, replace);

	printf("%s", str);

	return 0;
}
void replaceAll(char *s, char *regex, char *replacement)
{
	char *token, *copy;
	char *q, *p;
	int diff;
	int new_length;

	new_length = (strlen(s) / strlen(regex))*strlen(replacement);
	*copy = (char*)malloc(sizeof(char) * new_length);
	memset(*copy, 0, new_length);

	q = s;
	p = copy;

	while (*q != '\0')
	{
		token = strstr(q, regex);
		if (token != NULL)
		{
			diff = token - q;
			while (diff) {
				*p = *q;
				p++; q++;
				diff--;
			}
			strcat(p, replacement);
			p = p + strlen(replacement);
			q = q + strlen(regex);
		}
		else
		{
			*p = *q;
			p++;
			q++;
		}
	}
	*p = '\0';

}