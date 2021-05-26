//5개의 자연수 입력 후 제일 작은 값 기준 상대적인 크기 출력(소수점 이하는 반올림)

#include<stdio.h>

int main(void)
{
	double a[5];
	int i;
	double min;

	printf("5개의 자연수를 입력하시오.\n");

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