#include<stdio.h>
#include<string.h>
//baekjoon 9093
int main()
{
	char str[1002] = { 0 };
	int T;
	scanf("%d ", &T);
	while(T--)
	{
		fgets(str, 1002, stdin);
		char *ptr = strtok(str, " "); //공백을 기준으로 단어 저장
		while (ptr != NULL)
		{
			int len = strlen(ptr);
			for (int j = 0;j < len/2;j++)
			{
				char temp = ptr[j];
				ptr[j] = ptr[len - j - 1];
				ptr[len - j - 1] = temp;
			}
			if (ptr[0] == '\n') //개행문자 제거
			{
				for (int k = 1;k < len;k++)
					printf("%c", ptr[k]);
			}
			else
				printf("%s ", ptr);
			ptr = strtok(NULL, " ");
		}
		printf("\n");
	}
	return 0;
}