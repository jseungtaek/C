#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
	char str[101], cnt = 0;
	scanf("%s", str);
	int i = 0;
	while (str[i] != '\0')
	{
		if (isalpha(str[i]))
			cnt++;
		i++;
	}
	printf("%d", cnt);
	return 0;
}