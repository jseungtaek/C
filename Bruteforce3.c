#include<stdio.h>
#include<stdlib.h>
//baekjoon 7568
typedef struct {
	int x;
	int y;
	int num;
}order;
int main()
{
	int n, max_x = 0, max_y = 0;
	scanf("%d", &n);
	order* list = (order*)malloc(sizeof(order)*n);
	for (int i = 0;i < n;i++)
		scanf("%d%d", &list[i].x, &list[i].y);
	for (int i = 0;i < n;i++)
	{
		int cnt = 1;
		for (int j = 0;j < n;j++)
		{
			if (list[i].x < list[j].x&&list[i].y < list[j].y)
				cnt++;
		}
		list[i].num = cnt;
		printf("%d ", list[i].num);
	}
	return 0;
}