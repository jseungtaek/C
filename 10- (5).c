#include<stdio.h>
#include<math.h>
typedef struct Rectangle
{
	int x;
	int y;
}POINT;

POINT translate(POINT p1, POINT p2);
int area(struct Rectangle *r);
int perimeter(struct Rectangle *r);
int is_square(struct Rectangle *r);
int main()
{
	struct Rectangle p1, p2, r;

	printf("좌표를 입력하시오.");

	scanf("%d%d", &p1.x, &p1.y);
	scanf("%d%d", &p2.x, &p2.y);

	r = translate(p1, p2);

	printf("넓이 : %d  둘레 : %d ", area(&r),perimeter(&r));

	if (is_square(&r) == 1)
		printf("정사각형");
	else
		printf("정사각형이 아님");

	return 0;
}
int area(struct Rectangle *r)
{
	int area = 0;

	area = r->x*r->y;

	return area;
}
int perimeter(struct Rectangle *r)
{
	int x1 = 0, y1 = 0;

	x1 = r->x * 2;
	y1 = r->y * 2;

	return x1 + y1;
}
int is_square(struct Rectangle *r)
{
	if (r->x == r->y)
		return 1;
	else return 0;
}
POINT translate(POINT p1, POINT p2)
{
	POINT newp;

	newp.x = abs(p1.x - p2.x);
	newp.y = abs(p1.y - p2.y);

	return newp;
}
