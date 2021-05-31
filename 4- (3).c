#include<stdio.h>

void Add(double a, double b, double c, double d, double *p, double *q);
void Multiply(double a, double b, double c, double d, double *m, double *n);
int main(void) 
{
	double a, b, c, d, p, q, m, n;

	printf("복소수 a+bi,c+di를 입력하시오.\n");
	scanf("%lf%lf%lf%lf", &a, &b, &c, &d);

	Add(a, b, c, d, &p, &q);
	Multiply(a, b, c, d, &m, &n);

	printf("%g+%gi,%g+%gi", p, q, m, n);

	return 0;
}
void Add(double a, double b, double c, double d, double *p, double *q)
{
	*p = a + c;
	*q = b + d;
}
void Multiply(double a, double b, double c, double d, double *m, double *n)
{
	*m = (a*c) - (b*d);
	*n = (a*d) + (b*c);
}