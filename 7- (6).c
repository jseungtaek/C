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

	printf("문자열을 입력하시오 ");
	gets(s);
	printf("찾을 문자열을 입력하시오 ");
	gets(subst);

	length = strlen(s);
	p = StrStr2(s, subst);

	if (p == 0)
		printf("없음");
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