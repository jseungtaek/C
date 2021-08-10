#include<stdio.h>
//baekjoon 1476
int main()
{
	int E, S, M, year = 0, E1 = 0, S1 = 0, M1 = 0;
	scanf("%d%d%d", &E, &S, &M);
	while (1)
	{
		E1++;
		S1++;
		M1++;
		year++;
		if (E1 > 15)
			E1 = 1;
		if (S1 > 28)
			S1 = 1;
		if (M1 > 19)
			M1 = 1;
		if (E == E1 && S == S1 && M == M1)
			break;
	}
	printf("%d", year);
	return 0;
}