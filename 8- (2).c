#include<stdio.h>
#define size 2
struct Point
{
	int x;
	int y;
};
int equal(struct Point p1, struct Point p2);
int quadrant(struct Point p);
int main()
{
	struct Point p1;
	struct Point p2;

	printf("��ǥ�� �Է��Ͻÿ�.");
	scanf("%d%d", &p1.x, &p1.y);
	scanf("%d%d", &p2.x, &p2.y);

	if (equal(p1, p2) == 1)
	{
		printf("������ ");
		quadrant(p1);
	}
	else
	{
		printf("�ٸ��� ");
		quadrant(p1), quadrant(p2);
	}
	return 0;
}
int equal(struct Point p1, struct Point p2)
{
	if (p1.x == p2.x&&p1.y == p2.y)
		return 1;
	else
		return 0;
}
int quadrant(struct Point p)
{
	if (p.x > 0 && p.y > 0)
		return printf("( %d,%d ): 1��и�", p.x, p.y);
	else if (p.x < 0 && p.y > 0)
		return printf("( %d,%d ): 2��и�", p.x, p.y);
	if (p.x < 0 && p.y < 0)
		return printf("( %d,%d ): 3��и�", p.x, p.y);
	if (p.x > 0 && p.y < 0)
		return printf("( %d,%d ): 4��и�", p.x, p.y);
}