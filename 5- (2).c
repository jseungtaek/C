#include<stdio.h>
#include<ctype.h>

int main(void)
{
	int c, flag = 0;
	char ch;
	int a = 0, b = 0;
	
	while ((c = getchar()) != '\n')
	{
		if (isdigit(c) != 0 && flag == 0)//ctype에서 isdigit은 숫자 구분을 위해 사용
		{
			a = a * 10 + (c - '0');//c가 아스키코드로 49이기 때문에 '0'을 빼준다 '0'은 아스키코드로 48이기 때문
		}
		else if (isdigit(c) == 0 && flag == 0)//숫자가 아닌 문자  '+' 또는 '-'을 받았을때의 조건문 
		{
			if (c == '+') 
			{
				ch = '+';
				flag = 1; //연산자를 입력한 후 숫자를 받기위해 flag에 1 저장 
			}
			else if (c == '-')
			{
				ch = '-';
				flag = 1;
			}
		}
		else if (isdigit(c) != 0 && flag == 1)
		{
			b = b * 10 + (c - '0');
		}
		
	}

	if (ch == '+')
		printf("%d", a + b);

	else if (ch == '-')
		printf("%d", a - b);

	return 0;
}