/*2019���� ���� �Է� �޾�, �׿� �ش��ϴ� �޷��� ���*/

#include<stdio.h>

int main(void)
{
	int days[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
	int blank = 2;
	int month;
	int i;
	int count=0;
	int day = 1;
	printf("2019���� ���� �Է��Ͻÿ�.\n");
	scanf("%d", &month);

	printf(" �� �� ȭ �� �� �� �� \n");
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
