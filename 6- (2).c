#include<stdio.h>
#include<ctype.h>
#include<string.h>

void Capitalize(char word[]);
int main(void)
{
	char str[101];

	printf("문자열을 입력하시오.");
	scanf("%s", &str);

	Capitalize(str);

	printf("%s",str);

	return 0;

}
void Capitalize(char word[])
{
	int length, i;

	length = strlen(word);

	word[0] = toupper(word[0]);

	for (i = 1;i < length;i++)
		word[i] = tolower(word[i]);
}