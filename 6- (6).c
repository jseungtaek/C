#include<stdio.h>
#include<string.h>

void sort_string(char *s);
int main(void)
{
	char s[99];


	printf("소문자로 이루어진 단어를 입력하세요");
	gets(s);

	sort_string(s);

	printf("%s", s);

	return 0;
}
void sort_string(char *s)
{
	int i, j;
	int least;
	char temp;
	for (i = 0; i < strlen(s); i++)
	{
		least = i;
		for (j = i; j < strlen(s); j++)
			if (s[least] > s[j])
				least = j;
		temp = s[least];
		s[least] = s[i];
		s[i] = temp;
	}

}