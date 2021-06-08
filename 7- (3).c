#include<stdio.h>
#include<ctype.h>
#include<string.h>
int main(void)
{
	int ch[18];
	int i = 0;
	int n = 0;
	int count = 0;
	int checksum = 0;


	printf("카드번호 값 ");
	while (i < 15)
	{
		ch[i] = getchar();
		if (isdigit(ch[i]))
			i++;
	}
	while (n < 14)
	{
		if ((n % 2) == 1)
		{
			if (2 * (ch[n] - '0') > 10)
				count += (2 * (ch[n] - '0')) - 9;
			else
				count += 2 * (ch[n] - '0');
		}
		else
			count += (ch[n] - '0');
		n++;
	}

	if ((count % 10) != 0)
		checksum = 10 - (count % 10);
	else
		checksum = 0;


	if (checksum == (ch[14] - '0'))
		printf("정상");
	else
		printf("오류");

	return 0;
}