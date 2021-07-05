#include<stdio.h>
//baekjoon 2292
int main()
{
	int N, distance = 1, layer = 6;

	scanf("%d", &N);

	for (int i = 1;i < N;)
	{
		distance++; //최종거리
		i += layer; //둘러싸고 있는 벌집이 6개씩 추가되므로 추가된것만큼 i를 이동
		layer += 6; // 6 12 18 ...
	}
	printf("%d", distance);
	return 0;
}