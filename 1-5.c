/*0�� �Էµ� �� ���� 1~9 ������ �������� �Է��ϸ�
�� ���ڵ��� ����� �ԷµǾ������� ���*/

#include<stdio.h>

int main(void)
{
	int a[10] = { 0 };
	int i, n;

	while (1)
	{
		printf("1~9 ������ �������� �Է��Ͻÿ�.");
		scanf("%d", &n);

		if (n == 0)
			break;

		a[n]++;
	}

	for (i = 1;i < 10;i++)
		printf("%d:%d\n", i, a[i]);
	return 0;
}