#include<stdio.h>
#define size 101

int StrLength(char *s);
int main(void)
{
	char arr[size];

	printf("���ڿ��� �Է��Ͻÿ�.\n");
	gets(arr); //gets�� �̿��� ���ڿ� �Է�
	
	StrLength(arr);

	return 0;
}
int StrLength(char *s)
{
	int i = 0;

	while (s[i] != 0)
		i++; //���ڰ� ���������� i++ 
	printf("���ڿ��� ���� = %d", i);
}
