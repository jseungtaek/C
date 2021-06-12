#include<stdio.h>

struct AvgMinMax
{
	double avg;
	int max, min;
};
void GetGrades(int grades[], int n);
void GetAvgMinMax(int grades[], int n, struct AvgMinMmax *AMM);
int main()
{
	struct AvgMinMax x;
	int arr[5];

	printf("5���� ������ �Է��Ͻÿ�.");

	GetGrades(arr, 5);

	GetAvgMinMax(arr, 5, &x);

	printf("MIN : %d , AVG : %g , MAX : %d ", x.min, x.avg, x.max);

	return 0;
}
void GetGrades(int grades[], int n)
{
	int i;

	for (i = 0;i < n;i++)
		scanf("%d", &grades[i]);
	
}
void GetAvgMinMax(int grades[], int n, struct AvgMinMax *AMM)
{
	
	int i;

	AMM->min = grades[1];
	AMM->max = grades[1];
	AMM->avg = 0;

	for (i = 0;i < n;i++)
	{
		AMM->max = (AMM->max > grades[i]) ? AMM->max : grades[i];
		AMM->min = (AMM->min < grades[i]) ? AMM->min : grades[i];
		AMM->avg += grades[i];
	}
	AMM->avg /= n;

}