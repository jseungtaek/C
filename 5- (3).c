#include <stdio.h>
#include <string.h>

int main(void)
{
	char s[100], c[2];
	int n, i = 0;

	scanf("%s%s", s, c);

	n = strlen(s); //���ڿ��� ����
	for (i = 0; i < n; i++)
		if (tolower(s[i]) != tolower(c[0])) //��ҹ��� ������ ����
			printf("%c", s[i]);
	printf("\n");

	return 0;
}