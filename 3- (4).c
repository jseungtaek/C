/*사용자로부터 배열의 위치를 나타내는 인덱스와 
하나의 정수를 입력받아{1,3,5,7,9,2,4,6,8}를 저장하고 있는 배열 intx[]의
idx 위치에 입력받은 정수를 끼어넣어 출력
idx번째 위치에 새로운 원소를 끼워 넣는 함수 void InsertArray(int x[],int n,int idx,int val)
int v[]의 모든 원소들을 화면에 출력하는 함수 void PrintIntArray(int v[],int n) 이용*/

#include<stdio.h>

void InsertArray(int x[], int n, int idx, int val);
void PrintIntArray(int v[], int n);
int main(void) 
{
	int x[10] = { 1,3,5,7,9,2,4,6,8 };
	int i, n;
	
	printf("idx번째 자리수를 입력하시오.");
	scanf("%d", &i);
	printf("idx번째 자리수에 들어갈 정수를 입력하시오.");
	scanf("%d", &n);

	InsertArray(x, 10, i, n);
	PrintIntArray(x, 10);

	return 0;
}
void InsertArray(int x[], int n, int idx, int val)
{
	int i;

	for (i = 9;i >= idx;i--) {
		x[i] = x[i - 1];
	}
	x[idx] = val;
}
void PrintIntArray(int v[], int n)
{
	int i;

	for (i = 0;i < 10;i++)
		printf("%d ", v[i]);
}