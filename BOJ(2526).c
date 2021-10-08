#include<stdio.h>
#define MAX 100000
//baekjoon 2526
int top = -1;
typedef int Element;
Element stack[MAX];
void push(Element e)
{
	stack[++top] = e;
}
Element peek()
{
	return stack[top];
}
int main()
{
	int N, P, flag = 0, N_a, N_b, P_a, i;
	scanf("%d%d", &N, &P);
	push(N);
	N_a = N_b = N;
	P_a = P;
	while (1)
	{
		N = N_b * N_a;
		P = N % P_a;
		N_a = P;
		push(P);
		for (i = 0;i < top;i++)
		{
			if (peek() == stack[i])
			{
				flag = 1;
				break;
			}
		}
		if (flag == 1)
			break;
	}
	printf("%d", top - i);
	return 0;
}