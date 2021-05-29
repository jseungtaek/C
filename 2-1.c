/*0이 입력될 때까지 임의의 개수(10개 이하)의 양의 정수들을 입력받아
0을 제외한 숫자들의 크기를 나타내는 세로 막대그래프 출력*/
#include<stdio.h>

int main(void)
{
	int a[10];
	int i, j, max = 0, n, tmp;

	printf("양의 정수들을 입력하시오. 0이 입력되면 종료 \n");
	for (i = 0; i < 10; i++) {
		scanf("%d", &a[i]);
		max = (max > a[i]) ? max : a[i];
		if (a[i] == 0)
			break;
	}
	tmp = max;
	for (n = 0; n < tmp; n++) {
		for (j = 0; j < i; j++) {
			if (a[j] >= max)
				printf("*");
			else
				printf(" ");
		}
		max--;
		printf("\n");
	}

	return 0;
}