#include<stdio.h>
#include<string.h>
//baekjoon 1157
int main()
{
	char str[1000001] = { 0 };
	char alphabet[26] = { 0 };
	int max;
	int max_alpha = 0;

	scanf("%s", str);
	for (int i = 0;i < strlen(str);i++)
	{
		if (str[i] < 97) //'a'
			str[i] += 32;
		alphabet[str[i] - 97]++;
	}
	max = alphabet[0];
	for (int i = 1;i < 26;i++)
	{
		if (max < alphabet[i])
		{
			max = alphabet[i];
			max_alpha = i;
		}
		else if (max == alphabet[i]&&alphabet[i]!=0)
		{
			max_alpha = -1;
		}
	}
	if (max_alpha != -1)
		printf("%c", max_alpha + 65);
	else printf("?\n");
	return 0;
}