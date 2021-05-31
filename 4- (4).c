#include<stdio.h>
#define size 5

int IsOrdered(int a[], int n);
void Merge(int *a, int n, int *b, int m, int *c);
int main(void)
{
	int a[size], b[size], c[size+size];
	int i;

	printf("a�迭�� %d�� ������ �Է��Ͻÿ�.\n",size);
	for (i = 0;i < size;i++)
		scanf("%d", &a[i]);
	printf("b�迭�� %d�� ������ �Է��Ͻÿ�.\n",size);
	for (i = 0;i < size;i++)
		scanf("%d", &b[i]);
	if (IsOrdered(a, size) == 0 || IsOrdered(b, size) == 0)
		printf("Not Sorted");

	else
	{
		Merge(a, size, b, size, c);
		for (i = 0;i < (size+size);i++) {
			printf("%d ", c[i]);
		}
	}
	return 0;
}
int IsOrdered(int a[], int n)
{
	int i;
	int flag = 0;

	for (i = 0;i < n - 1;i++) {
		if (a[i] <= a[i + 1])
			flag = 1;
		else {
			flag = 0;
			break;
		}
	}
	if (flag == 1) return 1;
	else return 0;
}
void Merge(int *a, int n, int *b, int m, int *c)
{
	int i = 0, j = 0;

	while (i < n && j < m) {
		if (a[i] < b[j]) { // a[0]�� b[0] �� �� ���� c[0]�� ���� 
			c[i + j] = a[i];
			i++; //b[0]�� �� ũ�� a[1]�� b[0] �񱳸� ���� i++
		}
		else {
			c[i + j] = b[j];
			j++;
		}
	} 
	while (i < n) {
		c[i + j] = a[i];
		i++;
	}
	while (j < m) {
		c[i + j] = b[j];
		j++;
	}

}