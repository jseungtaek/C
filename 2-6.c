/*10명의 학생의 점수를 정수로 입력 등수를 출력하는 프로그램 
중복되는 등수가 여러 명이면 다음 등수는 그만큼 밀림*/

#include<stdio.h>

int main(void)
{
	int a[10];
	int i, j;
	int rank[10] = { 1,1,1,1,1,1,1,1,1,1 };

	printf("10명의 학생들의 점수를 정수로 입력하시오.\n");
	for (i = 0;i < 10;i++)
		scanf("%d", &a[i]);

	for (i = 0;i < 10;i++) {
		for (j = 0;j < 10;j++) {
			if (a[i] < a[j]) {
				rank[i]++;
			}
		}
	}

	for (i = 0;i < 10;i++)
		printf("%d ", rank[i]);

	return 0;
}