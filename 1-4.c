/*0이 입력될 때까지 임의의 개수(2개 이상 10개 이하)의 정수를 입력받아
0을 제외한 숫자들의 평균, 표준 편차, z-value들의 합을 계산하여 출력*/


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
		printf("2개이상 10개 이하의 정수를 입력하시오.");
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