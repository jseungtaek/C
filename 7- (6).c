#include<stdio.h>
#include<string.h>
char *StrStr2(char *st, char *subst);
int main(void)
{
	char s[100];
	char subst[50];
	char *p;
	int i, length = 0;
	int loc;

	printf("���ڿ��� �Է��Ͻÿ� ");
	gets(s);
	printf("ã�� ���ڿ��� �Է��Ͻÿ� ");
	gets(subst);

	length = strlen(s);
	p = StrStr2(s, subst);

	if (p == 0)
		printf("����");
	if (p != 0)
	{
		loc = p - s;
		for (i = loc; i < length; i++)
			printf("%c", s[i]);
	}

	return 0;
}
char *StrStr2(char *st, char *subst)
{
	int len = strlen(subst);
	int i = 0;
	while (*st)
	{
		if (strncmp(st, subst, len) == 0)
			break;
		st++;
	}
	if (*st)
		return (char *)st;

	return 0;
}