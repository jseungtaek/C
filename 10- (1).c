#include <stdio.h>
#include <string.h>
#include <ctype.h>

struct Spam_info {
	char phone_num[20]; 
	int times;
};

struct Spam_info Array[100];

int main(void)
{
	char scanned;
	int i, max_stored = 0, Issame;
	char tmp[12];

	for (i = 0; i < 12;i++)
		Array[i].times = 0;

	while (1)
	{
		i = 0;

		printf("전화번호를 입력하시오 : ");

		while ((scanned = getchar()) != '\n')
		{
			if (isdigit(scanned))
			{
				Array[max_stored].phone_num[i] = scanned;
				tmp[i] = scanned;
				i++;
			}
		}

		Array[max_stored].phone_num[i] = '\0';
		tmp[i] = '\0';

		Issame = 0;

		for (i = 0; i < max_stored; i++)
		{
			if (strcmp(Array[i].phone_num, tmp) == 0)
			{
				Array[i].times++;
				Issame = 1;

				if (Array[i].times >= 2) //같은 번호가 2번 입력이 될 때부터 1씩 카운트 된다.
					printf("스팸일 가능성이 높습니다.\n");
				else
					printf("스팸이 아닙니다.\n");
			}
		}

		if (Issame == 0)
		{
			max_stored++;
			strcpy(Array[max_stored].phone_num, tmp);

			printf("스팸이 아닙니다.\n");
		}
	}

	return 0;
}