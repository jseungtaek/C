#include<stdio.h>
//baekjoon 2875
int main()
{
	int M, N, K, team = 0;
	scanf("%d%d%d", &N, &M, &K);
	int quotient = N / 2 < M ? N / 2 : M;//�ִ� �� ���ϱ�
	K -= N + M - 3 * quotient;
	if (K > 0) {
		K--;
		quotient -= K / 3 + 1; //3���� ���� ��ŭ �򿡼� ���ش�.
	}
	printf("%d\n", quotient);
	return 0;
}