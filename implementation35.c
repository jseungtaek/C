#include<stdio.h>
#include<string.h>
//baekjoon 1076
int main()
{
	char color[7];
	char R[12] = { 0 };
	for (int i = 0;i < 3;i++)
	{
		scanf("%s", color);

		if (!strcmp(color, "black"))
		{
			if (i != 2)
				R[i] = '0';
		}
		else if (!strcmp(color, "brown"))
		{
			if (i == 2)
			{
				for (int j = 2;j < 3;j++)
					R[j] = '0';
			}
			else
				R[i] = '1';
		}
		else if (!strcmp(color, "red"))
		{
			if (i == 2)
			{
				for (int j = 2;j < 4;j++)
					R[j] = '0';
			}
			else
				R[i] = '2';
		}
		else if (!strcmp(color, "orange"))
		{
			if (i == 2)
			{
				for (int j = 2;j < 5;j++)
					R[j] = '0';
			}
			else
				R[i] = '3';
		}
		else if (!strcmp(color, "yellow"))
		{
			if (i == 2)
			{
				for (int j = 2;j < 6;j++)
					R[j] = '0';
			}
			else
				R[i] = '4';
		}
		else if (!strcmp(color, "green"))
		{
			if (i == 2)
			{
				for (int j = 2;j < 7;j++)
					R[j] = '0';
			}
			else
				R[i] = '5';
		}
		else if (!strcmp(color, "blue"))
		{
			if (i == 2)
			{
				for (int j = 2;j < 8;j++)
					R[j] = '0';
			}
			else
				R[i] = '6';
		}
		else if (!strcmp(color, "violet"))
		{
			if (i == 2)
			{
				for (int j = 2;j < 9;j++)
					R[j] = '0';
			}
			else
				R[i] = '7';
		}
		else if (!strcmp(color, "grey"))
		{
			if (i == 2)
			{
				for (int j = 2;j < 10;j++)
					R[j] = '0';
			}
			else
				R[i] = '8';
		}
		else
		{
			if (i == 2)
			{
				for (int j = 2;j < 11;j++)
					R[j] = '0';
			}
			else
				R[i] = '9';

		}
	}
	if (R[0] == '0')
	{
		if (R[1] == '0') printf("0");
		else
		{
			for (int i = 1;i < strlen(R);i++)
				printf("%c", R[i]);
		}
	}
	else
		printf("%s", R);
	return 0;
}
#include<stdio.h>
#include<string.h>
//baekjoon 1076
int main()
{
	long long value[2][11] = { {0,1,2,3,4,5,6,7,8,9},{1,10,100,1000,10000,100000,1000000,10000000,100000000,1000000000} };
	char *color[11] = { "black","brown","red","orange","yellow","green","blue","violet","grey","white" };
	long long result = 0, multiple;
	char str[3][10];
	

	for (int j = 0;j < 3;j++)
		scanf("%s", str[j]);
	for (int i = 0;i < 10;i++)
	{
		if (!strcmp(color[i], str[0]))
			result += (value[0][i] * 10);
		if (!strcmp(color[i], str[1]))
			result += value[0][i];
		if (!strcmp(color[i], str[2]))
			multiple = value[1][i];
	}
	printf("%lld", result*multiple);
	return 0;
}