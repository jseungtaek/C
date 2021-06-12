#include<stdio.h>

struct Complex
{
	int a;
	int b;
};
struct Complex get_complex_power(struct Complex z, int n);
int main()
{
	struct Complex z;
	struct Complex x;
	int n;

	printf("복소수와 n 제곱을 입력하시오.");
	scanf("%d%d", &z.a, &z.b);
	scanf("%d", &n);

	x = get_complex_power(z, n);

	printf("%d+%di", x.a, x.b);

	return 0;

}
struct Complex get_complex_power(struct Complex z, int n)
{
	struct Complex y;
	struct Complex x;
	int i;

	y.a = 0;
	y.b = 0;
	if (n == 1)
		return z;
	y.a = z.a*z.a - z.b*z.b;
	y.b = z.a*z.b + z.a*z.b;
	
	for (i = 2;i < n;i++)
	{
		x.a = y.a*z.a - y.b*z.b;
		x.b = y.a*z.b + y.b*z.a;
	}
	if (n == 2)
		return y;
	else return x;
}