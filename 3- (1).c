/*���A 1  0 2 �̴�. �ڿ��� N�� �Է¹޾� A^n�� ��� 
        0 -1 1
	    3  1 0                                        */
#include<stdio.h>

#define ROWS 3
#define COLS 3
int main(void)
{
	int A[ROWS][COLS] = { {1,0,2},{0,-1,1},{3,1,0} };
	int B[ROWS][COLS];
	int C[ROWS][COLS] = { 0 };
	int n, r, c, q, m;

	for (r = 0;r < ROWS;r++) {
		for (c = 0;c < COLS;c++)
			B[r][c] = A[r][c];
	}
	printf("�������� �Է��Ͻÿ�.");
	scanf("%d", &n);
	for (m = 1;m < n;m++) {
		for (r = 0;r < ROWS;r++) {
			for (c = 0;c < COLS;c++) {
				for (q = 0;q < COLS;q++) {
					C[r][c] += A[r][q] * B[q][c];
				}
			}
		}
		for (r = 0;r < ROWS;r++) {
			for (c = 0;c < COLS;c++) {
				B[r][c] = C[r][c];
				C[r][c] = 0;
			}
		}
	}
	for (r = 0;r < ROWS;r++) {
		for (c = 0;c < COLS;c++) {
			printf(" %d ", B[r][c]);
		}
		printf("\n");
	}
	return 0;
}