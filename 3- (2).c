/*100이하의 자연수 입력 해당 개수의 정수들을 입력받아 평균을
출력. n개의 데이터를 저장하고 있는 정수 배열 int x[]의 평균을 
계산하여 반환하는 double AvgArray(int x[], int n) 함수 사용*/

#include<stdio.h>

double AvgArray(int x[], int n);
int main(void) 
{
	int x[100];
	int n, i;

	printf("입력할 데이터의 개수를 입력하시오.");
	scanf("%d", &n);
	
	printf("자연수를 입력하시오.\n");
	for (i = 0;i < n;i++) 
		scanf("%d", &x[i]);
	
	printf("%g", AvgArray(x, n));

	return 0;
}
double AvgArray(int x[], int n)
{
	int i;
	double avg = 0, sum = 0;

	for (i = 0;i < n;i++) 
		sum += x[i];
	
	return avg = sum / n;
}