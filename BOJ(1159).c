#include<stdio.h>
#include<string.h>
//baekjoon 1159 ³ó±¸°æ±â
int alpha[26];
int main(void)
{
	char name[150][32];
	int N, flag = 0;

	scanf("%d", &N);
	for (int i = 0;i < N;i++)
	{
		scanf("%s", name[i]);
		alpha[name[i][0] - 'a']++;
	}
	for (int i = 0;i < 26; i++)
	{
		if (alpha[i] >= 5)
		{
			printf("%c", i + 'a');
			flag = 1;
		}
	}
	if (flag == 0)
		printf("PREDAJA");
	return 0;
}