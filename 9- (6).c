#include<stdio.h>

struct Square
{
	int x, y, x2, y2;
};
int main()
{
	struct Square a, b;
	int i;
	int min_x, min_y, max_x2, max_y2;

	printf("���� �Ʒ� ��ǥ�� ������ ���� ��ǥ�� �Է��Ͻÿ�.");

	scanf("%d%d%d%d", &a.x, &a.y, &a.x2, &a.y2);
	scanf("%d%d%d%d", &b.x, &b.y, &b.x2, &b.y2);

	min_x = (a.x < b.x) ? a.x : b.x;
	min_y = (a.y < b.y) ? a.y : b.y;
	max_x2 = (a.x2 > b.x2) ? a.x2 : b.x2;
	max_y2 = (a.y2 > b.y2) ? a.y2 : b.y2;

	printf("�� ���簢���� �����ϴ� ���簢��\n ���� �Ʒ� : %d %d ������ �Ʒ� : %d %d", min_x, min_y, max_x2, max_y2);

	return 0;
	
}