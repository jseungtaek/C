#include<stdio.h>
//baekjoon 10101
int main()
{
	int tri[3], cnt = 0, sum = 0, tmp;
	for (int i = 0;i < 3;i++)
	{
		scanf("%d", &tri[i]);
		sum += tri[i];
	}
	if (tri[0] == tri[1] && tri[1] == tri[2] && tri[0] == tri[2])
		printf("Equilateral");
	else if (tri[1] == tri[2] || tri[0] == tri[1] || tri[0] == tri[2])
	{
		if (sum == 180)
			printf("Isosceles");
		else
			printf("Error");
	}
	else if (sum == 180)
		printf("Scalene");
	else if (sum != 180)
		printf("Error");
	return 0;
}
#include<stdio.h>
//baekjoon 10101
int main()
{
	int a, b, c;
	scanf("%d%d%d", &a, &b, &c);
	if (a + b + c != 180)
		printf("Error");
	else
	{
		if (a == b)
		{
			if(b==c)
				printf("Equilateral");
			else
				printf("Isosceles");
		}
		else
		{
			if(b==c)
				printf("Isosceles");
			else
			{
				if(a==c)
					printf("Isosceles");
				else
					printf("Scalene");
			}
		}
	}
	return 0;
}