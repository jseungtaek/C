#include<stdio.h>
#include<math.h>
//baekjoon 2420
int main()
{
	long long N, M, sum = 0;
	scanf("%lld %lld", &N, &M);
	sum=llabs(N-M);
    //sum = N - M;
	//if (sum < 0) sum*=-1; 
	printf("%lld", sum);
	return 0;
}