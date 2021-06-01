#include<stdio.h>
#define size 101

int StrLength(char *s);
int main(void)
{
	char arr[size];

	printf("문자열을 입력하시오.\n");
	gets(arr); //gets를 이용한 문자열 입력
	
	StrLength(arr);

	return 0;
}
int StrLength(char *s)
{
	int i = 0;

	while (s[i] != 0)
		i++; //문자가 없을때까지 i++ 
	printf("문자열의 길이 = %d", i);
}
