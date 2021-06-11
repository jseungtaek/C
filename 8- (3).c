#include<stdio.h>

struct Complex
{
	double p;
	double q;
};
void Add(struct Complex *p, struct Complex *q, struct Complex *r);
void Multiply(struct Complex *p, struct Complex *q, struct Complex *r);
int main()
{
	struct Complex p1;
	struct Complex p2;
	struct Complex p3;

	printf("복소수를 입력하시오.");
	
	scanf("%lf%lf", &p1.p, &p1.q);
	scanf("%lf%lf", &p2.p, &p2.q);

	Add(&p1, &p2, &p3);
	printf("합 : (%g %g)", p3.p, p3.q);
	Multiply(&p1, &p2, &p3);
	printf("곱 : (%g %g)", p3.p, p3.q);

	return 0;
	
}
void Add(struct Complex *p, struct Complex *q, struct Complex *r)
{
	r->p = (*p).p + (*q).p;
	r->q = (*p).q + (*q).q;
}
void Multiply(struct Complex *p, struct Complex *q, struct Complex *r)
{
	r->p = (*p).p*(*q).p - ((*p).q*(*q).q);
	r->q = (*p).p*(*q).q + (*p).q*(*q).p;
}