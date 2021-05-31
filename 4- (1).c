#include<stdio.h>
#include<math.h> //절대값 크기비교를 위해 사용
void sortAbs(int *a, int *b, int *c);
int main(void)
{
	int a, b, c;

	printf("세 개의 정수를 입력하시오.\n");
	scanf("%d%d%d", &a, &b, &c);

	sortAbs(&a, &b, &c);

	printf("%d %d %d", a, b, c);

	return 0;
}
void sortAbs(int *a, int *b, int *c)
{
	int tmp = 0;
	if (abs(*a) > abs(*b)) {
		tmp = *a;
		*a = *b;
		*b = tmp;
	}
	if (abs(*b) > abs(*c)) {
		tmp = *b;
		*b = *c;
		*c = tmp;
	}
	if (abs(*a) > abs(*b)) {
		tmp = *a;
		*a = *b;
		*b = tmp;
	}
	// a,b,c 순서대로 크기가 정렬
}
