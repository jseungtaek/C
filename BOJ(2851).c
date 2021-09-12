#include<stdio.h>
#include<math.h>
//baekjoon 2851 ½´ÆÛ¸¶¸®¿À
int main()
{
	int sum = 0, mush[10];
	for (int i = 0;i < 10;i++)
		scanf("%d", &mush[i]);
	for (int i = 0;i < 10;i++)
	{
		if (abs(sum + mush[i] - 100) <= abs(sum - 100))
			sum += mush[i];
		else
			break;
	}
	printf("%d", sum);
	return 0;
}