/*100������ �ڿ��� �Է� �ش� ������ �������� �Է¹޾� �����
���. n���� �����͸� �����ϰ� �ִ� ���� �迭 int x[]�� ����� 
����Ͽ� ��ȯ�ϴ� double AvgArray(int x[], int n) �Լ� ���*/

#include<stdio.h>

double AvgArray(int x[], int n);
int main(void) 
{
	int x[100];
	int n, i;

	printf("�Է��� �������� ������ �Է��Ͻÿ�.");
	scanf("%d", &n);
	
	printf("�ڿ����� �Է��Ͻÿ�.\n");
	for (i = 0;i < n;i++) 
		scanf("%d", &x[i]);
	
	printf("%g", AvgArray(x, n));

	return 0;
}
double AvgArray(int x[], int n)
{
	int i;
	double avg = 0, sum = 0;

	for (i = 0;i < n;i++) 
		sum += x[i];
	
	return avg = sum / n;
}