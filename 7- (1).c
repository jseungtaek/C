#include<stdio.h>
#include<ctype.h>

int main()
{
	int ch;
	int count = 0;
	int state = 0;

	printf("������ �Է��Ͻÿ�.");
	while ((ch = getchar()) != EOF)
	{
		if (isalpha(ch))
		{
			if (state == 0)
				count++;
			state = 1;
		}
		else
			state = 0;
	}
	printf(" �ܾ��� ���� : %d", count);
	return 0;
}
