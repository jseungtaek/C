/*0�� �Էµ� ������ ������ ����(2�� �̻� 10�� ����)�� ������ �Է¹޾�
0�� ������ ���ڵ��� ���, ǥ�� ����, z-value���� ���� ����Ͽ� ���*/


#include<stdio.h>
#include<math.h>

int main(void)
{
	int a[10];
	int i, j = 0;
	int sum = 0;
	double AVG, STDEV, Z_SUM =0, save = 0;

	for (i = 0;i < 10;i++)
	{
		printf("2���̻� 10�� ������ ������ �Է��Ͻÿ�.");
		scanf("%d", &a[i]);
		sum += a[i];
		if (a[i] == 0)
			break;
		j++;
	}

	AVG = (double)sum / j;
	for (i = 0;i < 10;i++)
	{
		if (i == j)
			break;
		save += (a[i] - AVG)*(a[i] - AVG);
	}

	STDEV = sqrt((double)save / j);

	for (i = 0;i < 10;i++)
	{
		if (i == j)
			break;
		Z_SUM += (a[i] - AVG) / STDEV;
	}

	printf("AVG:%g, STDEV:%g, Z_SUM:%.8e", AVG, STDEV, Z_SUM);

	return 0;
}