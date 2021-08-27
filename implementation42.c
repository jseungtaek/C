#include<stdio.h>
#include<string.h>
//baekjoon 10926
int main()
{
	char id[55];
	scanf("%s", id);
	int len = strlen(id);
	/*id[len] = '?';
	id[len + 1] = '?';
	id[len + 2] = '!';
	id[len + 3] = '\0';*/
	printf("%s", id);
	printf("?\?!");
	return 0;
}