#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<math.h>
//baekjoon 2745
int main()
{
	int B, i, sum = 0, num, k = 0;
	char N[100];
	scanf("%s %d", N, &B);
	int len = strlen(N);
	for (int i = len-1;i >= 0;i--)
	{
		if (isalpha(N[i]))
			num = N[i] - 'A' + 10;
		else
			num = N[i] - '0';
		sum += num * pow(B, k);
		k++;
	}
	printf("%d", sum);
	return 0;
}