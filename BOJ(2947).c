#include<stdio.h>
//baekjoon 2947 나무조각
int main()
{
	int a[5], k = 0;
	for (int i = 0;i < 5;i++)
		scanf("%d", &a[i]);
	while (1)
	{
		int tmp;
		if (a[k] > a[k + 1])
		{
			tmp = a[k];
			a[k] = a[k + 1];
			a[k + 1] = tmp;
			for (int j = 0;j < 5;j++)
				printf("%d ", a[j]);
			printf("\n");
		}
		k++;
		if (a[0] == 1 && a[1] == 2 && a[2] == 3 && a[3] == 4 && a[4] == 5)
			break;
		if (k >= 4 && (a[0] != 1 || a[1] != 2 || a[2] != 3 || a[3] != 4 || a[4] != 5))
			k = 0;
	}
	return 0;
}