#include <stdio.h>
#include <string.h>
//baekjoon 11723
int cal = 0;
int bit(char str[], int x) {
	if (!strcmp(str, "add")) {
		if ((cal & (1 << x)) == 0) {
			cal = cal + (1 << x);
		}
	}
	else if (!strcmp(str, "remove")) {
		if ((cal & (1 << x)) > 0) {
			cal = cal - (1 << x);
		}
	}
	else if (!strcmp(str, "check")) {
		if ((cal & (1 << x)) > 0) {
			printf("1\n");
		}
		else {
			printf("0\n");
		}

	}
	else if (!strcmp(str, "toggle")) {
		if ((cal & (1 << x)) == 0) {
			cal = cal + (1 << x);
		}
		else {
			cal = cal - (1 << x);
		}
	}
	else if (!strcmp(str, "all")) {
		cal = (1 << 21) - 1;
	}
	else { 
		cal = 0;
	}
	return 0;
}
int main() {
	int n, i, j;
	char arr[10] = {0};
	char ar[10];
	int tmp;
	int check = 1;
	scanf("%d", &n);
	for (i = 0;i < n;i++) {
		scanf("%s", &arr);
		scanf("%d", &tmp);
		bit(arr, tmp);
	}
}