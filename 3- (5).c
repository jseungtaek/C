/*�ϳ��� ������ 4�ڸ��� �������� ����ϴ� ���̰� 20�� �����迭�� �̿� 80�ڸ��� ���� ó��
1000������ ���� n�� ���ϴ� �Լ� void Multiply(int number[],int n) �ۼ� 
�� �迭�� ���ҿ��� 0-9999�� ���� ,  50!���� ���*/
#include<stdio.h>

void Multiply(int number[], int n);
int main(void)
{
	int arr[20] = { 1,0 };
	int n, i;
	int flag = 0;

	printf("50! ����� ���� 50�� �Է��Ͻÿ�.\n");
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