//5���� �ڿ��� �Է� �� ���� ���� �� ���� ������� ũ�� ���(�Ҽ��� ���ϴ� �ݿø�)

#include<stdio.h>

int main(void)
{
	double a[5];
	int i;
	double min;

	printf("5���� �ڿ����� �Է��Ͻÿ�.\n");

	for (i = 0; i < 5; i++)
		scanf("%lf", &a[i]);

	min = a[0];

	for (i = 0; i < 5; i++) {
		if (a[i] < min)
			min = a[i];
		else
			min = min;
	}


	for (i = 0; i < 5; i++)
		printf("%.0lf\n", a[i] / min);
	return 0;

}