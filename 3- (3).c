/*n개의 정수를 입력받아 배열 int v[]에 저장하여 반환하는 함수 void GetIntArray(int v[],int n)
길이가 n인 정수의 배열 int x[]에서 중복을 제거 후 배열의 길이를 반환하는 함수 int Trim(int x[],int n)
 5개의 정수를 입력받아 출력.*/

#include<stdio.h>

void GetIntArray(int v[], int n);
int Trim(int x[], int n);
int main(void)
{
	int arr[5];
	int i;

	GetIntArray(arr, 5);

	Trim(arr, 5);

	return 0;
}
void GetIntArray(int v[], int n)
{
	int i;
	printf("5개의 정수를 입력하시오.\n");
	for (i = 0;i < n;i++)
		scanf("%d", &v[i]);
}
int Trim(int x[], int n)
{
	int i, j, k, count = 0;

	count = n;
	for (i = n - 1;i >= 0;i--) {
		for (j = i - 1;j >= 0;j--) {
			if (x[i] == x[j]) {
				for (k = i;k < n;k++)
					x[k] = x[k + 1];
				count--;
			}
		}
	}
	for (i = 0;i < count;i++)
		printf("%d", x[i]);

}