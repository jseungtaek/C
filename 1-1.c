//����ڷκ��� 5���� ������ �Է� �޾� �迭�� ���� �� �Է��� �������� ���
#include<stdio.h>

int main(void)
{
	int a[5];
	int i;

	printf("5���� ������ �Է��Ͻÿ�.\n");

	for (i = 0; i < 5; i++)
		scanf("%d", &a[i]);

	for (i = 4; i >= 0; i--)
		printf("%d\n", a[i]);

	return 0;
}