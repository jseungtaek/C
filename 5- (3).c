#include <stdio.h>
#include <string.h>

int main(void)
{
	char s[100], c[2];
	int n, i = 0;

	scanf("%s%s", s, c);

	n = strlen(s); //문자열의 길이
	for (i = 0; i < n; i++)
		if (tolower(s[i]) != tolower(c[0])) //대소문자 구분을 없앰
			printf("%c", s[i]);
	printf("\n");

	return 0;
}