#include<stdio.h>
#include<string.h>
#include<ctype.h>
//baekjoon 10822 ´õÇÏ±â
int main()
{
	char str[802];
	int sum = 0, flag = 0, num = 0, k = 1;
	scanf("%s", str);
	for (int i = 0;i <= strlen(str);i++)
	{
		if (str[i] == ',' || str[i] == NULL)
		{
			if (flag == 0)
			{
				for (int j = i-1;j >= 0;j--)
				{
					num += (str[j] - '0') * k;
					k *= 10;
				}
				flag++;
			}
			else
			{
				for (int j = i - 1;;j--)
				{
					if (isdigit(str[j]))
					{
						num += (str[j] - '0') * k;
						k *= 10;
					}
					else break;
				}
			}
			k = 1;
			sum += num;
			num = 0;
		}
	}
	printf("%d", sum);
	return 0;
}