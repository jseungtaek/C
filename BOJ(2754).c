#include<stdio.h>
//baekjoon 2754 학점계산
int main()
{
	char str[3];
	double score = 0;
	scanf("%s", str);
	for (int i = 0;i < 1;i++)
	{
		if (str[i] == 'A')
			score += 4;
		else if (str[i] == 'B')
			score += 3;
		else if (str[i] == 'C')
			score += 2;
		else if (str[i] == 'D')
			score += 1;
		else
			score = 0;
	}
	if (str[1] == '+')
		score += 0.3;
	else if (str[1] == '-')
		score -= 0.3;
	printf("%.1f", score);
	return 0;
}