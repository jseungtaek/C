#include<stdio.h>
#include<string.h>
//baekjoon 10987
int main()
{
	char str[102];
	int cnt = 0;
	scanf("%s", str);
	for (int i = 0;i < strlen(str);i++)
	{
		if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
			cnt++;
	}
	printf("%d", cnt);
	return 0;
}