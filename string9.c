#include<stdio.h>
#include<stdbool.h>
#include<string.h>
#define MAX 101
//baekjoon 1316
bool check(char str[], int len);
bool check(char str[], int len)
{
	int left, right;
	for (int i = 0;i < len;i++)
	{
		for (int j = len - 1;j >= 0;j--)
		{
			if (str[i] == str[j])
			{
				left = i;
				right = j;
				for (int k = left;k < right;k++)
				{
					if (str[k] != str[k + 1])
						return false;
				}
			}
		}
	}
	return true;
}
int main()
{
	char str[MAX];
	int N, cnt = 0;

	scanf("%d", &N);

	for (int i = 0;i < N;i++)
	{
		scanf("%s", str);
		cnt += check(str, strlen(str));
	}
	printf("%d", cnt);
	return 0;
}