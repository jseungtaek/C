/*10���� �л��� ������ ������ �Է� ����� ����ϴ� ���α׷� 
�ߺ��Ǵ� ����� ���� ���̸� ���� ����� �׸�ŭ �и�*/

#include<stdio.h>

int main(void)
{
	int a[10];
	int i, j;
	int rank[10] = { 1,1,1,1,1,1,1,1,1,1 };

	printf("10���� �л����� ������ ������ �Է��Ͻÿ�.\n");
	for (i = 0;i < 10;i++)
		scanf("%d", &a[i]);

	for (i = 0;i < 10;i++) {
		for (j = 0;j < 10;j++) {
			if (a[i] < a[j]) {
				rank[i]++;
			}
		}
	}

	for (i = 0;i < 10;i++)
		printf("%d ", rank[i]);

	return 0;
}