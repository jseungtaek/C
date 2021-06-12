#include<stdio.h>

struct Point
{
	double x;
	double y;
};
void GetPoint(struct Point* p);
void Center(struct Point* p1, struct Point* p2, struct Point* p3, struct Point* q);
int main()
{
	struct Point p1, p2, p3, q;
	double c;

	printf("좌표를 입력하시오.");
	GetPoint(&p1);
	GetPoint(&p2);
	GetPoint(&p3);

	Center(&p1, &p2, &p3, &q);

	printf("%g %g", q.x, q.y);

	return 0;
}
void GetPoint(struct Point* p)
{
	scanf("%lf%lf", &p->x, &p->y);
}
void Center(struct Point* p1, struct Point* p2, struct Point* p3, struct Point* q)
{
	q->x = (p1->x + p2->x + p3->x) / 3;
	q->y = (p1->y + p2->y + p3->y) / 3;
}