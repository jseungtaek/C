#include<stdio.h>
#include<ctype.h>
#include<string.h>

int StrNInsert(char* s1, char* s2, int pos, int n);
int main(void)
{
	char ch1[100];
	char ch2[100];
	int p, n;
	int i, m = 0;

	printf("문자를 입력하시오");
	gets(ch1);
	printf("삽입할 문자를 입력하시오");
	gets(ch2);
	printf("삽입할 위치를 입력하시오");
	scanf("%d", &p);
	printf("삽입할 글자 수를 입력하시오");
	scanf("%d", &n);

	m = strlen(ch1);
	if (StrNInsert(ch1, ch2, p, n) == 1)
	{
		for (i = 0; i < m + n; i++)
			printf("%c", ch1[i]);
	}
	if (StrNInsert(ch1, ch2, p, n) == 0)
		puts(ch1);

	return 0;
}
int StrNInsert(char* s1, char* s2, int pos, int n)
{
	int m = 0;
	int i = 0, j, k;
	int r, t;
	char tmp[100];

	strcpy(tmp, s1);
	m = strlen(s1);

	if (m >= pos)
	{
		for (k = pos; k < m; k++)
			s1[n + k] = tmp[k];

		for (j = pos; j < (pos + n); j++)
		{
			s1[j] = s2[i];
			i++;
		}

		return 1;
	}

	else
		return 0;
}