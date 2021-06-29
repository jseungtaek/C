#include<stdio.h>
#include<string.h>
#include<ctype.h>
//baekjoon 1152
int main()
{
	char str[1000005];
	int cnt = 0, i;
	int str_length;
	scanf("%[^\n]", str); //%[^\n] 엔터가 나올때까지 문자열로 받음
	str_length = strlen(str);
	for (i = 1;i <str_length-1;i++) //시작 끝 공백 들어올 경우 제거
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