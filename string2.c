#include<stdio.h>
#include<string.h>
//baekjoon 10809
int main()
{
	char str[100] = { 0 };
	char array[26] = { 0 };

	scanf("%s", str);
	for (int i = 0;i < 26;i++)
		array[i] = -1;
	for (int i = 'a';i <= 'z';i++)
	{
		for (int j = 0;j < strlen(str);j++)
		{
			if (str[j] == i)
			{
				array[i - 'a'] = j;
				break;
			}
		}
	}
	for (int i = 0;i < 26;i++)
	{
		if (array[i] >= 0) printf("%d ", array[i]);
		else printf("-1 ");
	}
	
	return 0;
}