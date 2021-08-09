#include<stdio.h>
//baekjoon 2490
int main()
{
	int arr[4], cnt = 0;
	for (int i = 0;i < 3;i++)
	{
		for (int i = 0;i < 4;i++)
		{
			scanf("%d", &arr[i]);
			if (arr[i] == 0)
				cnt++;
		}
		switch (cnt)
		{
		case 0:
			printf("E\n");
			break;
		case 1:
			printf("A\n");
			break;
		case 2:
			printf("B\n");
			break;
		case 3:
			printf("C\n");
			break;
		default:
			printf("D\n");
			break;
		}
		cnt = 0;
	}
	

	return 0;
}