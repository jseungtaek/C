/*5명의 심판이 채점한 점수배열 입력 그 중 최고점수와
최저점수를 제외 나머지 점수들의 평균점수를 출력*/

#include<stdio.h>
double pointAverage(double score[], int N);
int main(void)
{
	double score[5];
	int i;
	double avg;

	printf("점수를 입력하시오.\n");
	for (i = 0; i < 5; i++)
		scanf("%lf", &score[i]);

	avg = pointAverage(score, i);

	printf("%lf", avg);


	return 0;
}
double pointAverage(double score[], int N)
{
	int i;
	double max = 0, min = 0, sum = 0;

	for (i = 0; i < 5; i++) {
		max = (max > score[i]) ? max : score[i];
		sum += score[i];
	}
	min = max;
	for (i = 0; i < 5; i++)
		min = (min < score[i]) ? min : score[i];

	sum -= (max + min);
	
	return sum / (i-2);
}