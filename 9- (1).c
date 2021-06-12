#include<stdio.h>

struct Fraction
{
	int n;
	int k;
};
struct Fraction addFraction(struct Fraction f1, struct Fraction f2);
int main()
{
	struct Fraction f1 = { 0,1 };
	struct Fraction f2;
	int flag = 0;

	printf("분수를 입력하시오.");

	while (1)
	{
		scanf("%d/%d", &f2.n, &f2.k);
		if (f2.k == 0)
			break;
		else
			f1 = addFraction(f1, f2);
	}
	printf("%d/%d",f1.n, f1.k);

	return 0;
}
struct Fraction addFraction(struct Fraction f1, struct Fraction f2)
{
	int a, b, r;
	int tmp = 0;
	struct Fraction f3;

	
	f3.k= f2.k * f1.k;
	f3.n = f2.n * f1.k + f2.k * f1.n;

	if (f3.k < f3.n)
	{
		tmp = f3.k;
		f3.k = f3.n;
		f3.n = tmp;
	}

	a = f3.k;
	b = f3.n;
	while (b)
	{
		r = a % b;
		a = b;
		b = r;
	}
	f3.k /= a;
	f3.n /= a;
	if (tmp != 0)
	{
		tmp = f3.k;
		f3.k = f3.n;
		f3.n = tmp;
	}
	return f3;
}
