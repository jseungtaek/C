#include<stdio.h>
#include<string.h>
#define MAX 16
//baekjoon 5622

int main()
{
	char str[MAX];
	int time = 0;
	scanf("%s", str);
	int str_len = strlen(str);
	for (int i = 0;i < str_len;i++)
	{
		if (str[i] >= 'A'&&str[i] <= 'C')
			time += 3;
		else if (str[i] >= 'D'&&str[i] <= 'F')
			time += 4;
		else if (str[i] >= 'G'&&str[i] <= 'I')
			time += 5;
		else if (str[i] >= 'J'&&str[i] <= 'L')
			time += 6;
		else if (str[i] >= 'M'&&str[i] <= 'O')
			time += 7;
		else if (str[i] >= 'P'&&str[i] <= 'S')
			time += 8;
		else if (str[i] >= 'T'&&str[i] <= 'V')
			time += 9;
		else if (str[i] >= 'W'&&str[i] <= 'Z')
			time += 10;
	}
	printf("%d", time);
	return 0;
}
#include<stdio.h>
#include<string.h>
#define MAX 16
//baekjoon 5622

int main()
{
	char str[MAX];
	int time[26] = { 3,3,3,4,4,4,5,5,5,6,6,6,7,7,7,8,8,8,8,9,9,9,10,10,10,10 };
	int all_time = 0;
	scanf("%s", str);
	for (int i = 0;i < strlen(str);i++)
	{
		all_time += time[str[i] - 'A'];
	}
	printf("%d", all_time);
	return 0;
}