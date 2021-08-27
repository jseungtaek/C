#include<stdio.h>
//beakjoon 1748
int main()
{
	int N, digit = 0;
	scanf("%d", &N);
	if (N < 10)
		digit = N;
	else if (N < 100 && N>9)
		digit = 9 + (N - 9) * 2;
	else if (N < 1000 && N>99)
		digit = 9 + 90 * 2 + (N - 99) * 3;
	else if (N < 10000 && N>999)
		digit = 9 + 90 * 2 + 900 * 3 + (N - 999) * 4;
	else if (N < 100000 && N>9999)
		digit = 9 + 90 * 2 + 900 * 3 + 9000 * 4 + (N - 9999) * 5;
	else if (N < 1000000 && N>99999)
		digit = 9 + 90 * 2 + 900 * 3 + 9000 * 4 + 90000 * 5 + (N - 99999) * 6;
	else if (N < 10000000 && N>999999)
		digit = 9 + 90 * 2 + 900 * 3 + 9000 * 4 + 90000 * 5 + 900000 * 6 + (N - 999999) * 7;
	else if (N < 100000000 && N>9999999)
		digit = 9 + 90 * 2 + 900 * 3 + 9000 * 4 + 90000 * 5 + 900000 * 6 + 9000000 * 7 + (N - 9999999) * 8;
	else if (N <= 1000000000)
		digit = 9 + 90 * 2 + 900 * 3 + 9000 * 4 + 90000 * 5 + 900000 * 6 + 9000000 * 7 + 90000000 * 8 + (N - 99999999) * 9;
	printf("%d", digit);
	return 0;
}
#include<stdio.h>
//baekjoon 1748
int main()
{
	int N, digit = 0, cnt = 1;
	scanf("%d", &N);
	while (N >= cnt)
	{
		digit += (N - cnt + 1);
		cnt *= 10;
	}
	printf("%d", digit);
	return 0;
}