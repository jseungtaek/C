/*5���� ������ ä���� �����迭 �Է� �� �� �ְ�������
���������� ���� ������ �������� ��������� ���*/

#include<stdio.h>
double pointAverage(double score[], int N);
int main(void)
{
	double score[5];
	int i;
	double avg;

	printf("������ �Է��Ͻÿ�.\n");
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