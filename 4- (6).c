#include<stdio.h>
#define size 5
void GetIntArray(int *v, int n);
int IsInclude(int *v, int n, int val);
int main(void)
{
	int a[size], b[size], c[size];
	int i, n = 0;
	
	printf("a배열에 %d개의 정수를 입력하시오.\n", size);
	GetIntArray(a, size);
	printf("b배열에 %d개의 정수를 입력하시오.\n", size);
	GetIntArray(b, size);

	for (i = 0;i < size;i++) {
		if (IsInclude(b, size, a[i]) == 1&&IsInclude(c,n,a[i])==0) {
			c[n] = a[i];
			printf("%d ", c[n]);
			n++;
		}
	}
	return 0;
}
void GetIntArray(int *v, int n)
{
	int i;

	for (i = 0;i < n;i++)
		scanf("%d", &*(v + i));
}
int IsInclude(int *v, int n, int val)
{
	int i;

	for (i = 0;i < n;i++) {
		if (*(v + i) == val) 
			return 1;
		
	}
	return 0;
}