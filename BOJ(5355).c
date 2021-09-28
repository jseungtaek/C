#include<stdio.h>
#include<string.h>
//baekjoon 5355 화성 수학
int main()
{
	double num;
	int T;
	char str[8];
	scanf("%d", &T);
	for (int i = 0;i < T;i++)
	{
		scanf("%lf ", &num);
		gets(str);
		for (int j = 0;j < strlen(str);j++)
		{
			if (str[j] == '@')
				num *= 3;
			else if (str[j] == '%')
				num += 5;
			else if(str[j]=='#')
				num -= 7;
		}
		printf("%.2lf\n", num);
	}
	return 0;
}