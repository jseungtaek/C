#include<stdio.h>
#include<string.h>
#define size 101
#define value 102

int main(void)
{
	char a[size] = { 0 }, b[size] = { 0 };
	int c[value] = { 0 };
	int i, n, m, up = 0;
	char tmp;

	scanf("%s%s", a, b);

	n = strlen(a);
	m = strlen(b);

	for (i = 0;i < n / 2;i++) //순서를 바꾼 후 계산하기 
	{
		tmp = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = tmp; 
	}
	for (i = 0;i < m / 2;i++)
	{
		tmp = b[i];
		b[i] = b[n - i - 1];
		b[n - i - 1] = tmp;
	}
	if (m > n) //문자열의 배열 중 숫자가 더 많이 들어있는 배열의 길이를 선택
	{
		for (i = 0;i < m;i++)
		{
			c[i] = (a[i] - '0' + b[i] - '0' + up) % 10;
			up = (a[i] - '0' + b[i] - '0' + up) / 10;
		}
		c[m] += up;
		if (up != 0)
			m += 1;

		for (i = m - 1;i >= 0;i--) //거꾸로 계산을 하였기에 출력은 다시 반대로 해준다
			printf("%d", c[i]);
	}
	else
	{
		for (i = 0;i < n;i++)
		{
			c[i] = (a[i] - '0' + b[i] - '0' + up) % 10;
			up = (a[i] - '0' + b[i] - '0' + up) / 10;
		}
		c[n] += up;
		if (up != 0)
			n += 1;
		for (i = n - 1;i >= 0;i--)
			printf("%d", c[i]);
	}
	return 0;
}