#include<stdio.h>
#define MAX 1001
//baekjoon 2161 Ä«µå 1
typedef int Element;
Element data[MAX];
int front;
int rear;
void init_queue() { front = rear = 0; };
int empty() { return front == rear; };
void push(Element e)
{
	rear = (rear + 1) % MAX;
	data[rear] = e;
}
Element pop()
{
	front = (front + 1) % MAX;
	return data[front];
}
int main()
{
	int N;
	init_queue();
	scanf("%d", &N);
	for (int i = 1;i <= N;i++)
		push(i);
	while (!empty())
	{
		printf("%d ", pop());
		push(pop());
	}
	return 0;
}