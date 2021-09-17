#include<stdio.h>
//baekjoon 10984 내 학점을 구해줘
int main()
{
	double G;
	int T, N, C;
	scanf("%d", &T);
	for (int i = 0;i < T;i++)
	{
		double gpa = 0;
		int total = 0;
		scanf("%d", &N);
		for (int j = 0;j < N;j++)
		{
			scanf("%d%lf", &C, &G);
			total += C;
			gpa += (G*(double)C);
		}
		printf("%d %.1f\n", total, gpa / (double)total);
	}
	return 0;
}