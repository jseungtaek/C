#include<stdio.h>
#include<string.h>
//baekjoon 17478 ����Լ��� ������?
int X;
void bar(int N)
{
	for (int i = 0;i < X - N;i++) printf("____");
}
void rec(int N)
{
	bar(N);
	printf("\"����Լ��� ������?\"\n");
	if (!N)
	{
		bar(N);
		printf("\"����Լ��� �ڱ� �ڽ��� ȣ���ϴ� �Լ����\"\n");
		bar(N);
		printf("��� �亯�Ͽ���.\n");
		return;
	}
	bar(N);
	printf("\"�� ����. �������� �� �� ����⿡ �̼��� ��� ������ ����� ������ �־���.\n");
	bar(N);
	printf("���� ������� ��� �� ���ο��� ������ ������ �߰�, ��� �����Ӱ� ����� �־���.\n");
	bar(N);
	printf("���� ���� ��κ� �ǾҴٰ� �ϳ�. �׷��� ��� ��, �� ���ο��� �� ���� ã�ƿͼ� ������.\"\n");
	rec(N - 1);
	bar(N);
	printf("��� �亯�Ͽ���.\n");
}
int main()
{
	scanf("%d", &X);
	printf("��� �� ��ǻ�Ͱ��а� �л��� ������ �������� ã�ư� ������.\n");
	rec(X);
	return 0;
}