#include<stdio.h>
#include<math.h>
#include<string.h>
//baekjoon 1427
char num[11];
int compare(const void *a, const void *b)
{
	if (*(char*)a > *(char*)b)
		return -1;
	else if (*(char*)a < *(char*)b)
		return 1;
	else return 0;
}
int main()
{
	int N, i = 0, len;
	scanf("%d", &N);
	while (N > 0)
	{
		num[i] = N % 10 + '0';
		N /= 10;
		i++;
	}
	len = strlen(num) + 1;
	qsort(num, len, sizeof(char), compare);
	printf("%s", num);
	return 0;
}