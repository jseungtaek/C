#include<stdio.h>
#include<math.h> //���밪 ũ��񱳸� ���� ���
void sortAbs(int *a, int *b, int *c);
int main(void)
{
	int a, b, c;

	printf("�� ���� ������ �Է��Ͻÿ�.\n");
	scanf("%d%d%d", &a, &b, &c);

	sortAbs(&a, &b, &c);

	printf("%d %d %d", a, b, c);

	return 0;
}
void sortAbs(int *a, int *b, int *c)
{
	int tmp = 0;
	if (abs(*a) > abs(*b)) {
		tmp = *a;
		*a = *b;
		*b = tmp;
	}
	if (abs(*b) > abs(*c)) {
		tmp = *b;
		*b = *c;
		*c = tmp;
	}
	if (abs(*a) > abs(*b)) {
		tmp = *a;
		*a = *b;
		*b = tmp;
	}
	// a,b,c ������� ũ�Ⱑ ����
}
