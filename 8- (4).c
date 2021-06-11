#include<stdio.h>

struct Vector
{
	double p;
	double q;
	double r;
	double s;
};
void Add(struct Vector *p, struct Vector *q, struct Vector *r);
void Multiply(struct Vector *p, double q, struct Vector *r);
void dotproduct(struct Vector *p, struct Vector *q);
int main()
{
	struct Vector p1;
	struct Vector p2;
	struct Vector p3;
	
	printf("벡터를 입력하시오.");
	scanf("%lf%lf%lf%lf", &p1.p, &p1.q, &p1.r, &p1.s);
	scanf("%lf%lf%lf%lf", &p2.p, &p2.q, &p2.r, &p2.s);

	Add(&p1, &p2, &p3);
	printf(" 차 : (%g %g %g %g) ", p1.p - p2.p, p1.q - p2.q, p1.r - p2.r, p1.s - p2.s);
	dotproduct(&p1, &p2);
	return 0;
}
void Add(struct Vector *p, struct Vector *q, struct Vector *r)
{
	r->p = (*p).p + (*q).p;
	r->q = (*p).q + (*q).q;
	r->r = (*p).r + (*q).r;
	r->s = (*p).s + (*q).s;
	printf(" 합 : (%g %g %g %g) ", (*r).p, (*r).q, (*r).r, (*r).s);
	
}
void Multiply(struct Vector *p, double q, struct Vector *r)
{
	r->p = (*p).p*q;
	r->q = (*p).q*q;
	r->r = (*p).r*q;
	r->s = (*p).s*q;
}
void dotproduct(struct Vector *p, struct Vector *q)
{
	double dot = 0;

	dot = (*p).p*(*q).p + (*p).q*(*q).q + (*p).r*(*q).r + (*p).s*(*q).s;
	printf( "dotproduct : %g", dot);
}