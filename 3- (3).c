/*n���� ������ �Է¹޾� �迭 int v[]�� �����Ͽ� ��ȯ�ϴ� �Լ� void GetIntArray(int v[],int n)
���̰� n�� ������ �迭 int x[]���� �ߺ��� ���� �� �迭�� ���̸� ��ȯ�ϴ� �Լ� int Trim(int x[],int n)
 5���� ������ �Է¹޾� ���.*/

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
	printf("5���� ������ �Է��Ͻÿ�.\n");
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