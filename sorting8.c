#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//baekjoon 10814

typedef struct {
	char name[101];
	int age;
	int order;
} str;

str sort[100001];

void merge(str* arr, int first, int mid, int last) {
	int i = first;
	int j = mid + 1;
	int k = first;

	while (i <= mid && j <= last) {
		if (arr[i].age < arr[j].age) {
			sort[k++] = arr[i++];
		}
		else if (arr[i].age > arr[j].age) {
			sort[k++] = arr[j++];
		}
		else {
			if (arr[i].order < arr[j].order) {
				sort[k++] = arr[i++];
			}
			else {
				sort[k++] = arr[j++];
			}
		}
	}
	if (i > mid) {
		while (j <= last)
			sort[k++] = arr[j++];
	}
	else {
		while (i <= mid)
			sort[k++] = arr[i++];
	}
	for (k = first; k <= last; k++)
		arr[k] = sort[k];
}

void mergesort(str* arr, int first, int last) {
	int mid;
	if (first < last) {
		mid = (first + last) / 2;
		mergesort(arr, first, mid);
		mergesort(arr, mid + 1, last);
		merge(arr, first, mid, last);
	}
}

int main(void)
{
	int N;
	scanf("%d", &N);
	
	str* student = (str*)malloc(sizeof(str)*N);

	for (int i = 0;i < N;i++)
	{
		scanf("%d", &student[i].age);
		scanf("%s", student[i].name);
		student[i].order = i;
	}

	mergesort(student, 0, N - 1);
	for (int i = 0;i < N;i++)
	{
		printf("%d %s\n", student[i].age, student[i].name);
	}

	return 0;
}