/*2019년의 월을 입력 받아, 그에 해당하는 달력을 출력*/

#include<stdio.h>

int main(void)
{
	int days[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
	int blank = 2;
	int month;
	int i;
	int count=0;
	int day = 1;
	printf("2019년의 월을 입력하시오.\n");
	scanf("%d", &month);

	printf(" 일 월 화 수 목 금 토 \n");
	for (i = 0;i < month - 1;i++) {
		blank += days[i];
	}
	count = blank % 7;
	for (i = 0; i < count; i++) {
		printf("   ");
	}
	for (i = 0;i < days[month - 1]; i++) {
		printf("%3d", day++);
		if (count % 7 == 6) {
			printf("\n");
		}
		count++;
	}

	return 0;
}
