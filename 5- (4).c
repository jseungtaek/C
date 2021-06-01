#include<stdio.h>
#define size 101
int IsPalindrome(char* str);
int main(void)
{
	char c[size];
	scanf("%s", &c);

	if (IsPalindrome(c))
		printf("Yes\n");
	else printf("No\n");
	
	return 0;
}
int IsPalindrome(char* str)
{
	int cnt = 0, i = 0;

	while (str[cnt] != '\0')   
		cnt++;

	for (i = 0; i < cnt / 2; i++) // 문자열내의 비교
		if (str[i] != str[(cnt - 1) - i])
			return 0;
	return 1;
}