#include<stdio.h>

typedef struct Point
{
	double x;
	double y;
};
typedef struct Segment
{
	double x;
	double y;
	double x1;
	double y1;
	double x2;
	double y2;
}point;

point translate(point p1, point p2);

void LineParameter(struct Segment *seg, double *s, double *y);
void Middle(struct Segment *seg, struct Point *c);
int main()
{
	struct Point c;
	struct Segment seg, p1, p2;
	double s, y;

	printf("좌표를 입력하시오.");

	scanf("%lf%lf", &p1.x1, &p1.y1);
	scanf("%lf%lf", &p2.x1, &p2.y1);

	seg = translate(p1, p2);

	LineParameter(&seg, &s, &y);
	Middle(&seg, &c);

	printf("기울기 : %g , y절편 : %g , 중점 : %g %g ", s, y, c.x, c.y);

	return 0;
}
void LineParameter(struct Segment *seg, double *s, double *y)
{

	*s = seg->y1 / seg->x1;
	*y = *s * (-seg->x) + seg->y;
}
void Middle(struct Segment *seg, struct Point *c)
{
	c->x = seg->x2/2;
	c->y = seg->y2/2;
}
point translate(point p1, point p2)
{
	point newp;

	newp.x = p1.x1;
	newp.y = p1.y1;
	newp.x1 = p2.x1 - p1.x1;
	newp.y1 = p2.y1 - p1.y1;
	newp.x2 = p2.x1 + p1.x1;
	newp.y2 = p2.y1 + p1.y1;

	return newp;
}