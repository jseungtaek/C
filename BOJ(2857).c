#include<stdio.h>
#include<string.h>
//baekjoon 2857 FBI
int main()
{
	char str[12];
	int flag = 0, cnt[5] = { 0 };
	for (int i = 0;i < 5;i++)
	{
		scanf("%s", str);
		for (int j = 0;j < strlen(str);j++)
		{
			if (str[j] == 'F')
			{
				if (str[j + 1] == 'B')
				{
					if (str[j + 2] == 'I')
					{
						flag = 2;
						break;
					}
				}
			}
		}
		if (flag == 2)
		{
			cnt[i]++;
			flag = 1;
		}
	}
	if (flag == 0) printf("HE GOT AWAY!");
	else
	{
		for (int i = 0;i < 5;i++)
		{
			if (cnt[i] != 0)
				printf("%d ", i + 1);
		}
	}
	return 0;
}