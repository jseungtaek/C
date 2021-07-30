#include<stdio.h>
//baekjoon 1436
int main()
{
	int N, cnt = 0, num = 665, idx = 0, temp;
	scanf("%d", &N);
	while (1)
	{
		if (idx == N) break;
		num++;
		temp = num;
		while (temp > 0)
		{
			if (temp % 10 == 6)
				cnt++;
			else
				cnt = 0;
			if (cnt >= 3) break;
			temp /= 10;
		}
		if (cnt >= 3)
			idx++;
		cnt = 0;
	}
	printf("%d", num);
	return 0;
}
