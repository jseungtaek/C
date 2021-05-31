#include<stdio.h>

int DiffMaxMin(int *arr, int len);
int main(void)
{
	int a[10];
	int i;

	printf("10개의 정수를 입력하시오.\n");
	for (i = 0;i < 10;i++)
		scanf("%d", &a[i]);
	
	printf("%d", DiffMaxMin(a, i));

	return 0;
}
int DiffMaxMin(int *arr, int len)
{
	int i;
	int max = 0;
	int min = 0;

	max = *arr;
	min = *arr;

	for (i = 0;i < len;i++) {
		max = (max > *(arr + i)) ? max : *(arr + i);
		min = (min < *(arr + i)) ? min : *(arr + i);
	}

	return max - min;
}