#include<stdio.h>
#include<string.h>
int main()
{
	char str[101];
	int alphabet[26] = { 0 };
	scanf("%s", str);
	for (int i = 0;i <str[i]!='\0' ;i++) //str[i]!='\0' -> strlen(str)
	{
		alphabet[str[i] - 'a']++;
	}
	for (int i = 0;i < 26;i++)
		printf("%d ", alphabet[i]);
	return 0;
}