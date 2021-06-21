#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define MAX_SIZE 2000000
#define Element int

Element data[MAX_SIZE];
int front;
int rear;


void init_queue() { front = rear = 0; }
int size() { return (rear - front + MAX_SIZE) % MAX_SIZE; }
int empty() { if (front == rear) return 1; else return 0; }
int full() { return (rear + 1) % MAX_SIZE == front; }
void push(Element e)
{
	if (full())
		return;
	rear = (rear + 1) % MAX_SIZE;
	data[rear] = e;
}
Element pop()
{
	if (empty())
		return -1;
	front = (front + 1) % MAX_SIZE;
	return data[front];
}
Element get_front()
{
	if (empty())
		return -1;
	return data[(front + 1) % MAX_SIZE];
}
Element get_back()
{
	if (empty())
		return -1;
	return data[rear];
}
int main()
{
	int K;
	init_queue();
	scanf("%d", &K);
	for (int i = 0;i < K;i++)
	{
		char str[6];
		scanf("%s", str);
		if (!strcmp(str, "push"))
		{
			int x = 0;
			scanf("%d", &x);
			push(x);
		}
		else if (!strcmp(str, "pop"))
			printf("%d\n", pop());
		else if (!strcmp(str, "size"))
			printf("%d\n", size());
		else if (!strcmp(str, "empty"))
			printf("%d\n", empty());
		else if (!strcmp(str, "front"))
			printf("%d\n", get_front());
		else if (!strcmp(str, "back"))
			printf("%d\n", get_back());
	}
	return 0;
}