#include<stdio.h>
#include<string.h>
#include<ctype.h>
//baekjoon 1152
int main()
{
	char str[1000005];
	int cnt = 0, i;
	int str_length;
	scanf("%[^\n]", str); //%[^\n] ���Ͱ� ���ö����� ���ڿ��� ����
	str_length = strlen(str);
	for (i = 1;i <str_length-1;i++) //���� �� ���� ���� ��� ����
	{
		if (isspace(str[i]))
			cnt++;
		/*else if (isalpha(str[i]))
			continue;*/
	}
	if (str_length == 1)
	{
		if (isspace(str[0]))
		{
			printf("0\n");
			return 0;
		}
	}
	printf("%d", cnt+1);
	return 0;
}