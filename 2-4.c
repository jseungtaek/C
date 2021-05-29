/*n개의정수를입력받아배열intv[ ]에저장하는함수 void GetIntArray(intv[ ], intn), 
길이가n인정수의배열intx[ ]의순 서를뒤집어(예를들어x[0]는x[n-1]로이동하고, x[n-1]은x[0]로이동함) 반환하는함수void ReverseIntArray(intx[ ], intn), 
길이가n인정수의배열intv[ ]를화면에출력하는void PrintIntArray(intv[ ], intn)를작성하고, 
이를이용하여사용자가입력한5개의정수들을역순으로출력*/

#include<stdio.h>

void GetIntArray(int v[], int n);
void ReverseIntArray(int x[], int n);
void PrintIntArray(int v[], int n);
int main(void)
{
	int a[5];
	int i;

	printf("5개의 정수를 입력하시오.\n");
	GetIntArray(a, 5);
	ReverseIntArray(a, 5);
	PrintIntArray(a, 5);

	return 0;
}
void GetIntArray(int v[], int n)
{
	int i;
	for (i = 0;i < n;i++)
		scanf("%d", &v[i]);
}
void ReverseIntArray(int x[], int n)
{
	int i;
	int tmp;
	for (i = 0;i < n / 2;i++) {
		tmp = x[i];
		x[i] = x[n - 1 - i];
		x[n - 1 - i] = tmp;
	}
}
void PrintIntArray(int v[], int n)
{
	int i;
	for (i = 0;i < n;i++)
		printf("%d", v[i]);
}