/*n개의 정수를 입력받아 배열 int v[]에 저장하여 리턴하는 함수 void GetIntArray(int v[], int n)
길이가 n인 정수의 배열 int v[]에서 짝수 번째 합과 홀수 번째 합을 계산하는 함수
void Sum(int v[],int n,int *p_even_sum,int *p_odd_sum) 작성
5개의 정수를 입력 후 짝수 번째 합과 홀수 번째 합 출력*/

#include<stdio.h>

void GetIntArray(int v[], int n);
void Sum(int v[], int n, int *p_even_sum, int *p_odd_sum);

int main(void)
{
	int arr[5];
	int i;
	int p_even_sum = 0;
	int p_odd_sum = 0;
	
	GetIntArray(arr, 5);
	Sum(arr, 5, &p_even_sum, &p_odd_sum);

	printf("E:%d Q:%d", p_even_sum, p_odd_sum);

	return 0;
}
void GetIntArray(int v[], int n)
{
	int i;
	printf("5개의 정수를 입력하시오.\n");
	for (i = 0;i < n;i++)
		scanf("%d", &v[i]);
}
void Sum(int v[], int n, int *p_even_sum, int *p_odd_sum)
{
	int i;

	for (i = 0;i < n;i++) {
		if (v[i] % 2 == 0)
			*p_even_sum += v[i];
		else
			*p_odd_sum += v[i];
	}
}