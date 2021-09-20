#include<stdio.h>
#include<string.h>
//baekjoon 2711 오타맨 고창영
int main()
{
	int T, location;
	char str[82];
	scanf("%d", &T);
	for (int i = 0;i < T;i++)
	{
		scanf("%d %s", &location, str);
		for (int i = 0;i < strlen(str);i++)
		{
			if (i + 1 != location)
				printf("%c", str[i]);
		}
		printf("\n");
	}
	return 0;
}