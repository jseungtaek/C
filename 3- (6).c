/*n���� ������ �Է¹޾� �迭 int v[]�� �����Ͽ� �����ϴ� �Լ� void GetIntArray(int v[], int n)
���̰� n�� ������ �迭 int v[]���� ¦�� ��° �հ� Ȧ�� ��° ���� ����ϴ� �Լ�
void Sum(int v[],int n,int *p_even_sum,int *p_odd_sum) �ۼ�
5���� ������ �Է� �� ¦�� ��° �հ� Ȧ�� ��° �� ���*/

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
	printf("5���� ������ �Է��Ͻÿ�.\n");
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