//�Էµ� 5���� ���� �������� ����

#include<stdio.h>

int main(void)
{
	int a[5];
	int i, j;
	int tmp;

	printf("5���� ������ �Է��Ͻÿ�.\n");

	for (i = 0; i < 5; i++)
		scanf("%d", &a[i]);

	for (j = 1; j < 5; j++)
		for (i = 0;i < j;i++)
			if (a[i] > a[j]) {
				tmp = a[i];
				a[i] = a[j];
				a[j] = tmp;
			}
	for (i = 0; i < 5; i++)
		printf("%d\n", a[i]);

	return 0;



}