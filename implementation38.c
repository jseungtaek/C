#include<stdio.h>
#include<string.h>
#include<ctype.h>
//baekjoon 10824
void re(char arr[], int len)
{
	char temp;
	for (int i = 0;i < len / 2;i++)
	{
		temp = arr[i];
		arr[i] = arr[len - i - 1];
		arr[len - i - 1] = temp;
	}
}
int main()
{
	char num[8];
	char com_num1[16] = { 0 }, com_num2[16] = { 0 };
	char sum[16] = { 0 };
	int carry = 0;
	int j = 0, len, a, b, c, d;
	for (int i = 0;i < 4;i++)
	{
		scanf("%s", num);
		len = strlen(num);
		if (i == 0)
		{
			for (a = 0;a < len;a++)
				com_num1[a] = num[a];
		}
		if (i == 1)
		{
			for (b = a;b < a + len;b++)
				com_num1[b] = num[j++];
			j = 0;
		}
		if (i == 2)
		{
			for (c = 0;c < len;c++)
				com_num2[c] = num[c];
		}
		if (i == 3)
		{
			for (d = c;d < c+len;d++)
				com_num2[d] = num[j++];
			j = 0;
		}
	}
	len = strlen(com_num1) > strlen(com_num2) ? strlen(com_num1) : strlen(com_num2);
	re(com_num1, strlen(com_num1));
	re(com_num2, strlen(com_num2));
	for (int i = 0;i < len;i++)
	{
		sum[i] = com_num1[i] + com_num2[i] + carry - '0';
		if (com_num1[i] == NULL)
			sum[i] = com_num2[i] + carry ;
		else if (com_num2[i] == NULL)
			sum[i] = com_num1[i] + carry ;
		if (sum[i] > '9')
		{
			carry = 1;
			sum[i]-= 10;
		}
		else carry = 0; 
	}
	if (carry == 1)
		sum[len] = '1';
	re(sum, strlen(sum));
	printf("%s", sum);
	return 0;
}
#include<stdio.h>
//baekjoon 10824
int main()
{
	long long a, b, c, d;
	char str[20];
	long long A, B;
	scanf("%lld %lld %lld %lld", &a, &b, &c, &d);
	sprintf(str, "%lld%lld %lld%lld", a, b, c, d);
	sscanf(str, "%lld %lld", &A, &B);
	printf("%lld", A + B);
	return 0;
}