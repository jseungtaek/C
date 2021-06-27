#include<stdio.h>
#include<string.h>
//baekjoon 2675
int main()
{
	char s[20];
	int T, R;
	scanf("%d", &T);


	for (int i = 0;i < T;i++)
	{
		scanf("%d", &R);
		scanf("%s", s);

		for (int j = 0;j < strlen(s);j++)
		{
			for (int k = 0;k < R;k++)
				printf("%c", s[j]);
		}
		printf("\n");
	}
	
	return 0;
}