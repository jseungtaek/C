#include<stdio.h>
//baekjoon 2292
int main()
{
	int N, distance = 1, layer = 6;

	scanf("%d", &N);

	for (int i = 1;i < N;)
	{
		distance++; //�����Ÿ�
		i += layer; //�ѷ��ΰ� �ִ� ������ 6���� �߰��ǹǷ� �߰��Ȱ͸�ŭ i�� �̵�
		layer += 6; // 6 12 18 ...
	}
	printf("%d", distance);
	return 0;
}