/*���� 10������ �Է��ϸ� 3������ �ٲپ� ���*/

#include<stdio.h>

int main(void)
{
	int a[1000];
	int i = 0, b, c, input;

	printf("���� 10������ �Է��Ͻÿ�.\n");
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