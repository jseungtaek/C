//사용자로부터 5개의 정수를 입력 받아 배열에 저장 후 입력의 역순으로 출력
#include<stdio.h>

int main(void)
{
	int a[5];
	int i;

	printf("5개의 정수를 입력하시오.\n");

	for (i = 0; i < 5; i++)
		scanf("%d", &a[i]);

	for (i = 4; i >= 0; i--)
		printf("%d\n", a[i]);

	return 0;
}