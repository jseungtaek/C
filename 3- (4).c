/*����ڷκ��� �迭�� ��ġ�� ��Ÿ���� �ε����� 
�ϳ��� ������ �Է¹޾�{1,3,5,7,9,2,4,6,8}�� �����ϰ� �ִ� �迭 intx[]��
idx ��ġ�� �Է¹��� ������ ����־� ���
idx��° ��ġ�� ���ο� ���Ҹ� ���� �ִ� �Լ� void InsertArray(int x[],int n,int idx,int val)
int v[]�� ��� ���ҵ��� ȭ�鿡 ����ϴ� �Լ� void PrintIntArray(int v[],int n) �̿�*/

#include<stdio.h>

void InsertArray(int x[], int n, int idx, int val);
void PrintIntArray(int v[], int n);
int main(void) 
{
	int x[10] = { 1,3,5,7,9,2,4,6,8 };
	int i, n;
	
	printf("idx��° �ڸ����� �Է��Ͻÿ�.");
	scanf("%d", &i);
	printf("idx��° �ڸ����� �� ������ �Է��Ͻÿ�.");
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