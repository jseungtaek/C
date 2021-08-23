#include<stdio.h>
//baekjoon 2875
int main()
{
	int M, N, K, team = 0;
	scanf("%d%d%d", &N, &M, &K);
	int quotient = N / 2 < M ? N / 2 : M;//ÃÖ´ë ¸ò ±¸ÇÏ±â
	K -= N + M - 3 * quotient;
	if (K > 0) {
		K--;
		quotient -= K / 3 + 1; //3À¸·Î ³ª´« ¸ò¸¸Å­ ¸ò¿¡¼­ »©ÁØ´Ù.
	}
	printf("%d\n", quotient);
	return 0;
}