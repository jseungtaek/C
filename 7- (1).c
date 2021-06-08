#include<stdio.h>
#include<ctype.h>

int main()
{
	int ch;
	int count = 0;
	int state = 0;

	printf("문장을 입력하시오.");
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
	printf(" 단어의 개수 : %d", count);
	return 0;
}
