/*하나의 정수에 4자리의 십진수를 기억하는 길이가 20인 정수배열을 이용 80자리의 수를 처리
1000이하의 정수 n을 곱하는 함수 void Multiply(int number[],int n) 작성 
각 배열의 원소에는 0-9999값 저장 ,  50!값을 출력*/
#include<stdio.h>

void Multiply(int number[], int n);
int main(void)
{
	int arr[20] = { 1,0 };
	int n, i;
	int flag = 0;

	printf("50! 출력을 위해 50을 입력하시오.\n");
	scanf("%d", &n);
	for (i = 2; i <= n; i++)
		Multiply(arr, i);

	for (i = 19; i >= 0; i--) {
		if (arr[i] != 0 && flag == 0) {
			flag = 1;
			printf("%d", arr[i]);
		}
		else if (flag == 1) {
			printf("%04d", arr[i]);
		}
	}

	return 0;
	
}
void Multiply(int number[], int n)
{
	int i;
	int up = 0;
	int tmp;

	for (i = 0;i < 20;i++) {
		tmp = number[i] * n;
		number[i] = (number[i] * n % 10000 + up);
		up = tmp / 10000;
	}
}