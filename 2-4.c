/*n�����������Է¹޾ƹ迭intv[ ]�������ϴ��Լ� void GetIntArray(intv[ ], intn), 
���̰�n�������ǹ迭intx[ ]�Ǽ� ����������(�������x[0]��x[n-1]���̵��ϰ�, x[n-1]��x[0]���̵���) ��ȯ�ϴ��Լ�void ReverseIntArray(intx[ ], intn), 
���̰�n�������ǹ迭intv[ ]��ȭ�鿡����ϴ�void PrintIntArray(intv[ ], intn)���ۼ��ϰ�, 
�̸��̿��Ͽ�����ڰ��Է���5�����������������������*/

#include<stdio.h>

void GetIntArray(int v[], int n);
void ReverseIntArray(int x[], int n);
void PrintIntArray(int v[], int n);
int main(void)
{
	int a[5];
	int i;

	printf("5���� ������ �Է��Ͻÿ�.\n");
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