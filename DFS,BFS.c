#include<stdio.h>
#define MAX_SIZE 1001

int adj[MAX_SIZE][MAX_SIZE];
int visited[MAX_SIZE];
int queue[MAX_SIZE];
int front;
int rear;

void init_queue() { front = rear = 0; }
int full() { return (rear - 1) % MAX_SIZE == front; }
int empty() { return front == rear; }
void enqueue(int e)
{
	if (full())
		return;
	rear = (rear + 1) % MAX_SIZE;
	queue[rear] = e;
}
int dequeue()
{
	if (empty())
		return -1;
	front = (front + 1) % MAX_SIZE;
	return queue[front];
}
void reset_visited(int N)
{
	for (int i = 1;i <= N;i++)
		visited[i] = 0;
}
void DFS(int v, int N)
{
	int w;
	printf("%d ", v); //정점 출력
	visited[v] = 1; //방문 표시
	for (w = 1;w <= N;w++) //인접 정점 체크
	{
		if (adj[v][w] && !visited[w]) //0, 즉 방문하지 않았고 이동가능
		{
			DFS(w, N);
		}
	}
}
void BFS(int v, int N)
{
	init_queue();
	enqueue(v);
	visited[v] = 1;
	printf("%d ", v);
	while (!empty())
	{
		int Nv = dequeue();
		for (int w = 1;w <= N;w++)
		{
			if (adj[Nv][w] && !visited[w])
			{
				visited[w] = 1;
				queue[++rear] = w;//enqueue(w) 쓰니 틀림 why?
				printf("%d ", w);
			}
			
		}
	}
}
int main()
{
	int N = 0, M = 0, V = 0;

	scanf("%d %d %d", &N, &M, &V);

	for (int i = 0;i < M;i++)
	{
		int s = 0, d = 0;
		scanf("%d %d", &s, &d);
		adj[s][d] = 1;
		adj[d][s] = 1;
	}
	DFS(V, N);
	printf("\n");
	reset_visited(N);
	BFS(V, N);
	return 0;
}