#include<stdio.h>
#include<math.h>
//baekjoon 1002
int main()
{
	int T, x1, y1, r1, x2, y2, r2;
	double dis;
	scanf("%d", &T);
	while (T--)
	{
		scanf("%d%d%d%d%d%d", &x1, &y1, &r1, &x2, &y2, &r2);
		dis = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
		if (dis == 0 && r1 == r2) //������ �Ÿ��� ����, ���� ���� �Ÿ��� 0 ��, ������ �ϳ��϶�
			printf("-1\n");
		else if (dis > abs(r1 - r2) && dis < r1 + r2) //������ �ΰ�
			printf("2\n");
		else if (dis == abs(r1 - r2) || dis == r1 + r2) //����, ����
			printf("1\n");
		else //������ �������, ���ȿ� ���� �־ ������ ���°��
			printf("0\n");
	}
	return 0;
}