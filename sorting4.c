#include<stdio.h>
#include<math.h>
#define MAX 500001
//baekjoon 2108
int array[MAX];
int cnt[MAX];
int compare(const void *a, const void *b)
{
	if (*(int*)a > *(int*)b)
		return 1;
	else if (*(int*)a < *(int*)b)
		return -1;
	else
		return 0;
}
int main()
{
	int N, sum = 0, max = 0, num_cnt = 0, max_num = 0;
	scanf("%d", &N);
	for (int i = 0;i < N;i++)
	{
		scanf("%d", &array[i]);
		cnt[4000 + array[i]]++; //�ִ� ������ �� 4000 , ���� �迭�� �������� �����Ƿ� +4000 �ؼ� ���� ����
		sum += array[i];
	}
	qsort(array, N, sizeof(int), compare);
	for (int i = 4000 + array[0];i <= 4000 + array[N - 1];i++)
	{
		if (cnt[i] > max)
		{
			max_num = i;
			num_cnt = 1;
			max = cnt[i];
		}
		else if (cnt[i] == max && num_cnt == 1) //�󵵼��� �ִ��� ���� ������ ������, �ι�°�� ���� ���� �̱�
		{
			num_cnt++;
			max_num = i;
		}
	}
	printf("%.0f\n",(double)sum / N);
	printf("%d\n", array[N / 2]);
	printf("%d\n", max_num - 4000);
	printf("%d\n", array[N-1]-array[0]);
	return 0;
}