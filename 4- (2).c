#include<stdio.h>

void GcdLcm(int a, int b, int *gcd, int *lcm);
int main()
{
	int a, b, GCD = 0, LCM = 0;

	printf("�� ���� ������ �Է��Ͻÿ�.\n");
	scanf("%d%d", &a, &b);

	GcdLcm(a, b, &GCD, &LCM);

	printf("GCD:%d  LCM:%d  ", GCD, LCM);

	return 0;
}
void GcdLcm(int a, int b, int *gcd, int *lcm)
{
	int tmp, quo = 0, rem = 0, c, d;
	
	c = a;
	d = b;
	while (1)
	{
		if (a > b) {
			tmp = b;
			b = a;
			a = tmp;
		}
		quo = b / a; //��
		rem = b % a; //������

		if (rem == 0) {
			*gcd = a;
			break; //�� ���� ���������� �������� 0�� �Ǹ� ���� ���� �ִ�����
		}
		else {
			b = a;
			a = rem; //�������� 0�� �ƴϸ� b���� ���� �� a���� ������ �� ����
		}
	}

	*lcm = c * d / *gcd; //�� ���� ���ϰ� �ִ������� ������ �ּҰ����
}