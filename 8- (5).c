#include<stdio.h>
#define size 5

struct Card
{
	int suit;
	int rank;
};
enum SUIT { SPADE, DIAMOND, HEART, CLOVER };
int main()
{
	struct Card list[size];
	int i, j, k;
	int rank[100] = { 0 };
	int flag = 0;

	printf("ī�带 �Է��Ͻÿ�.");
	
	for (i = 0;i < size;i++)
	{
		scanf("%s%d", &list[i].suit, &list[i].rank);
		rank[list[i].rank]++;
	}
	
	for (i = 1;i < 13;i++)
		{
			if (rank[i] >= 4) {
				printf("Yes");
				flag = 1;
				break;
			}
		}
	
	
	
	for (i = 0;i < size;i++)
	{
			if (list[i].rank <= 0 || list[i].rank > 13)
			{
			flag = 2;
			}
		for (j = i+1;j < size;j++)
		{
		
			if ((list[i].suit == list[j].suit)&&(list[i].rank == list[j].rank)) 
			{
				flag = 3;
			}
		}
	}
	for (i = 0;i < size;i++)
	{
		for (j = i + 1;j < size;j++)
		{
			if (flag == 1 && (list[i].suit == list[j].suit) && (list[i].rank == list[j].rank)) {
				flag = 4;
				break;
			}
		}
	}
	if (flag == 0)
		printf("No");
	else if (flag == 2)
		printf("����");
	else if (flag == 3)
		printf("�ߺ�");
	else if (flag == 4)
		printf("����");
	return 0;

	
}