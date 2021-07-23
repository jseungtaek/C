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
		cnt[4000 + array[i]]++; //최대 정수의 값 4000 , 음수 배열은 존재하지 않으므로 +4000 해서 범위 조절
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
		else if (cnt[i] == max && num_cnt == 1) //빈도수가 최대인 것이 여러개 있을때, 두번째로 작은 것을 뽑기
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