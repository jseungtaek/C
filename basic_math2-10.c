#include<stdio.h>
#define _USE_MATH_DEFINES 
#include<math.h>
//baekjoon 3053
int main()
{
	double R;
	scanf("%lf", &R);
	printf("%.6lf\n", M_PI*pow(R, 2));
	printf("%.6lf\n", 2 * pow(R, 2));
	return 0;
}
#include<stdio.h>
#define M_PI 3.14159265359
//baekjoon 3053
int main()
{
	double R;
	scanf("%lf", &R);
	printf("%.6lf\n", M_PI*R*R);
	printf("%.6lf\n", 2 * R*R);
	return 0;
}