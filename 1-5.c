/*0이 입력될 때 까지 1~9 사이의 정수들을 입력하면
각 숫자들이 몇번씩 입력되었는지를 출력*/

#include<stdio.h>

int main(void)
{
	int a[10] = { 0 };
	int i, n;

	while (1)
	{
		printf("1~9 사이의 정수들을 입력하시오.");
		scanf("%d", &n);

		if (n == 0)
			break;

		a[n]++;
	}

	for (i = 1;i < 10;i++)
		printf("%d:%d\n", i, a[i]);
	return 0;
}