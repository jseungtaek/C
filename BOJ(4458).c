#include<stdio.h>
#include<string.h>
#include<ctype.h>
//baekjoon 4458 첫 글자를 대문자로
int main()
{
	int N;
	char str[32] = { 0 };
	scanf("%d ", &N);
	for (int i = 0;i < N;i++)
	{
		gets(str);
		if(islower(str[0]))
			str[0] -= 32;
		printf("%s\n", str);
	}
	return 0;
}