#include<stdio.h>
#include<ctype.h>
#include<string.h>

int main(void)
{
	char str[101];
	char ch[26] = { 'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z' };
	int a[26] = { 0 };
	int index, b, i, j;

	printf("문자열을 입력하시오.");
	scanf("%s", &str);

	index = strlen(str);

	for (i = 0;i < 26;i++) {
		str[i] = tolower(str[i]);
		for (j = 0;j < index;j++) {
			if (ch[i] == str[j])
				a[i] += 1;
		}
		if(a[i]>0)
			printf(" %c:%d ", ch[i], a[i]);
	}
	return 0;
	
}