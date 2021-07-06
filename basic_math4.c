#include<stdio.h>
//baekjoon 2869
int main()
{
	int A, B, V, day;
	scanf("%d%d%d", &A, &B, &V);
	day = (V - B - 1) / (A - B) + 1; //total distance = (V-B) one day distance = (A-B) => existence leftover -> +1 prepare none leftover -> (A-B-1)
	printf("%d", day);
	return 0;
}