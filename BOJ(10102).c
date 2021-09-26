#include<stdio.h>
#include<string.h>
//baekjoon 10102 °³Ç¥
int main()
{
	int V, cnt_A = 0, cnt_B = 0;
	char str[17];
	scanf("%d ", &V);
	scanf("%s", str);
	for (int i = 0;i < V;i++)
	{
		if (str[i] == 'A')
			cnt_A++;
		else
			cnt_B++;
	}
	if (cnt_A > cnt_B)
		printf("A");
	else if (cnt_A < cnt_B)
		printf("B");
	else
		printf("Tie");
	return 0;
}