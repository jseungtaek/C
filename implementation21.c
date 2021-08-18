#include<stdio.h>
//baekjoon 1977
int main()
{
	int sq1, sq2, sum = 0, min = 10001, sq;
	scanf("%d%d", &sq1, &sq2);
	for (int i = 0;i <= 10000;i++)
	{
		sq = i * i;
		if (sq >= sq1 && sq <= sq2)
		{
			sum += sq;
			if (min > sq)
				min = sq;
		}
		if (sq >= sq2)
			break;
	}
	if (sum != 0)
		printf("%d\n%d\n", sum, min);
	else
		printf("-1\n");
	return 0;
}
#include<stdio.h>
#include<math.h>
//baekjoon 1977
int main()
{
	int sum = 0, min = 10001;
	double sq1, sq2;
	scanf("%lf%lf", &sq1, &sq2);
	sq1 = sqrt(sq1);
	sq1 = ceil(sq1);
	sq2 = sqrt(sq2);
	sq2 = floor(sq2);
	for (int i = sq1;i <= sq2;i++)
	{
		sum += (i*i);
		if (min > i*i)
			min = i * i;
	}
	
	if (sum != 0)
		printf("%d\n%d\n", sum, min);
	else
		printf("-1\n");
	return 0;
}