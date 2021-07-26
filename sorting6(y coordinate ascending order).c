#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#define MAX 100001
//baekjoon 11651
typedef struct {
	int x;
	int y;
}coordinate;
int compare(const void *A, const void *B)
{
	coordinate * a = (coordinate*)A;
	coordinate * b = (coordinate*)B;
	if (a->y > b->y)
		return 1;
	else if (a->y < b->y)
		return -1;
	else
	{
		if (a->x < b->x)
			return -1;
		else
			return 1;
	}
	return 0;
}
int main()
{
	int n;
	coordinate* list;
	scanf("%d", &n);
	list = (coordinate*)malloc(n * sizeof(coordinate));
	for (int i = 0;i < n;i++)
		scanf("%d%d", &list[i].x, &list[i].y);
	qsort(list, n, sizeof(list[0]), compare);
	for (int i = 0;i < n;i++)
		printf("%d %d\n", list[i].x, list[i].y);
	return 0;
}
#include<stdio.h>
#include<stdlib.h>
#define MAX 100001
//baekjoon 11651
typedef struct {
	int x;
	int y;
} coord;

coord point[100001];

void merge(coord* arr, int first, int mid, int last)
{
	int i, j, k;
	i = first;
	j = mid + 1;
	k = first;

	while (i <= mid && j <= last)
	{
		if (arr[i].y < arr[j].y)
			point[k++] = arr[i++];
		else if (arr[i].y > arr[j].y)
			point[k++] = arr[j++];
		else {
			if (arr[i].x < arr[j].x)
				point[k++] = arr[i++];
			else if (arr[i].x > arr[j].x)
				point[k++] = arr[j++];
		}
	}
	if (i <= mid)
	{
		while (i <= mid)
			point[k++] = arr[i++];
	}
	else {
		while (j <= last)
			point[k++] = arr[j++];
	}
	for (k = first;k <= last;k++)
		arr[k] = point[k];
}
void mergesort(coord* arr, int first, int last)
{
	int mid;
	if (first < last)
	{
		mid = (first + last) / 2;
		mergesort(arr, first, mid);
		mergesort(arr, mid + 1, last);
		merge(arr, first, mid, last);
	}
}
int main()
{
	int n;
	scanf("%d", &n);
	coord* arr = (coord*)malloc(sizeof(coord)*n);
	for (int i = 0;i < n;i++)
		scanf("%d%d", &arr[i].x, &arr[i].y);
	mergesort(arr, 0, n - 1);
	for (int i = 0;i < n;i++)
		printf("%d %d\n", arr[i].x, arr[i].y);
	return 0;
}