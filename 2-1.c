/*0�� �Էµ� ������ ������ ����(10�� ����)�� ���� �������� �Է¹޾�
0�� ������ ���ڵ��� ũ�⸦ ��Ÿ���� ���� ����׷��� ���*/
#include<stdio.h>

int main(void)
{
	int a[10];
	int i, j, max = 0, n, tmp;

	printf("���� �������� �Է��Ͻÿ�. 0�� �ԷµǸ� ���� \n");
	for (i = 0; i < 10; i++) {
		scanf("%d", &a[i]);
		max = (max > a[i]) ? max : a[i];
		if (a[i] == 0)
			break;
	}
	tmp = max;
	for (n = 0; n < tmp; n++) {
		for (j = 0; j < i; j++) {
			if (a[j] >= max)
				printf("*");
			else
				printf(" ");
		}
		max--;
		printf("\n");
	}

	return 0;
}