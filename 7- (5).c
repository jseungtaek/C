#include<stdio.h>
#include<string.h>
void crypto(char *src, int *key);
int main(void)
{
	char s[100];
	int key[5];
	int i;

	printf("��ȣȭ�ϰ� ���� ���ڿ��� �Է��Ͻÿ� ");
	gets(s);
	printf("��ȣ key�� �Է��Ͻÿ� ");
	for (i = 0; i < 5; i++)
		scanf("%d", &key[i]);

	crypto(s, key);
	printf("��ȣȭ�� ���ڿ� : %s", s);	
	return 0;

}
void crypto(char *src, int *key)
{
	int i, k = 0;
	char tmp[100] = { 0 };
	int n = 1;


	for (i = 0; i < strlen(src); i++)
	{
		if ((i % 5) == 0)
			k = 0;
		src[i] += key[k];
		if (src[i] > 126)
			src[i] = src[i] - 62;
		k++;
	}

}

