#include<stdio.h>
#include<ctype.h>

int main(void)
{
	int c, flag = 0;
	char ch;
	int a = 0, b = 0;
	
	while ((c = getchar()) != '\n')
	{
		if (isdigit(c) != 0 && flag == 0)//ctype���� isdigit�� ���� ������ ���� ���
		{
			a = a * 10 + (c - '0');//c�� �ƽ�Ű�ڵ�� 49�̱� ������ '0'�� ���ش� '0'�� �ƽ�Ű�ڵ�� 48�̱� ����
		}
		else if (isdigit(c) == 0 && flag == 0)//���ڰ� �ƴ� ����  '+' �Ǵ� '-'�� �޾������� ���ǹ� 
		{
			if (c == '+') 
			{
				ch = '+';
				flag = 1; //�����ڸ� �Է��� �� ���ڸ� �ޱ����� flag�� 1 ���� 
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