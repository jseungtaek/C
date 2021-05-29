/*양의 10진수를 입력하면 3진수로 바꾸어 출력*/

#include<stdio.h>

int main(void)
{
	int a[1000];
	int i = 0, b, c, input;

	printf("양의 10진수를 입력하시오.\n");
	scanf("%d", &input);

	b = input % 3;
	c = input / 3;
	a[i] = b;
	while (1) {
		if (c == 0) break;
		i++;
		b = c % 3;
		c /= 3;
		a[i] = b;
	}

	for (i;i >= 0;i--)
		printf("%d", a[i]);

	return 0;
}