#include<stdio.h>

void GcdLcm(int a, int b, int *gcd, int *lcm);
int main()
{
	int a, b, GCD = 0, LCM = 0;

	printf("두 양의 정수를 입력하시오.\n");
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
		quo = b / a; //몫
		rem = b % a; //나머지

		if (rem == 0) {
			*gcd = a;
			break; //두 수를 나누었을때 나머지가 0이 되면 나눈 값이 최대공약수
		}
		else {
			b = a;
			a = rem; //나머지가 0이 아니면 b에는 작은 수 a에는 나머지 값 대입
		}
	}

	*lcm = c * d / *gcd; //두 수를 곱하고 최대공약수로 나누면 최소공배수
}