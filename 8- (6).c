#include<stdio.h>
#include<math.h>

struct RectCoord
{
	double x;
	double y;
};
struct PolarCoord
{ 
	double r; 
    double theta;/*radian*/ 
};
void RectToPolar(struct RectCoord rc, struct PolarCoord *pc);
int main()
{
	struct RectCoord p1;
	struct PolarCoord P1;

	printf("직교좌표계를 입력하시오.");
	scanf("%lf%lf", &p1.x, &p1.y);
	RectToPolar(p1, &P1);
	printf(" %g %g", P1.r, P1.theta);

	return 0;

}
void RectToPolar(struct RectCoord rc, struct PolarCoord *pc)
{

	pc->r = sqrt(rc.x + rc.y);
	pc->theta = atan2(rc.x, rc.y);

	return *pc;
}