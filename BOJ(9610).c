#include<stdio.h>
//baekjoon 9610 »çºÐ¸é
int main()
{
	int n, x, y, q1 = 0, q2 = 0, q3 = 0, q4 = 0, axis = 0;
	scanf("%d", &n);
	for (int i = 0;i < n;i++)
	{
		scanf("%d%d", &x, &y);
		if (x == 0 || y == 0)
			axis++;
		else if (x > 0 && y > 0)
			q1++;
		else if (x < 0 && y>0)
			q2++;
		else if (x < 0 && y < 0)
			q3++;
		else
			q4++;
	}
	printf("Q1: %d\nQ2: %d\nQ3: %d\nQ4: %d\nAXIS: %d\n", q1, q2, q3, q4, axis);
	return 0;
}