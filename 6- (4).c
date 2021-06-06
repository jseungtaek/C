#include<stdio.h>
#include<string.h>

#define size 101

void replaceAll(char *s, char *regex, char *replacement);
int main(void)
{
	char str[size], word[size], replace[size];

	printf("���ڿ��� �Է��Ͻÿ�.\n");
	gets(str);
	printf("�Էµ� ���ڿ����� �ٲٰ� ���� ���ڿ��� �Է��Ͻÿ�.\n");
	gets(word);
	printf("�ٲٰ� ���� ���ڿ��� �ٲ� ���ڿ��� �Է��Ͻÿ�.\n");
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