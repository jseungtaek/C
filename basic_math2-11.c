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
		if (dis == 0 && r1 == r2) //점과의 거리가 같고, 중점 사이 거리가 0 즉, 중점이 하나일때
			printf("-1\n");
		else if (dis > abs(r1 - r2) && dis < r1 + r2) //접점이 두개
			printf("2\n");
		else if (dis == abs(r1 - r2) || dis == r1 + r2) //외접, 내접
			printf("1\n");
		else //점접이 없을경우, 원안에 원이 있어서 접점이 없는경우
			printf("0\n");
	}
	return 0;
}