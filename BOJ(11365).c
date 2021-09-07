#include<stdio.h>
#include<string.h>
//baekjoon 11365 !밀비 급일
int main()
{
	char str[502];
	while (1)
	{
		gets(str);
		if (!strcmp(str,"END")) break;
		int len = strlen(str);
		for (int i = 0;i < len / 2;i++)
		{
			char temp = str[i];
			str[i] = str[len - i - 1];
			str[len - i - 1] = temp;
		}
		printf("%s\n", str);
	}
	return 0;
}