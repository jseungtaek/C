#include<stdio.h>
#include<string.h>
//baekjoon 10757
void reverse(char A[], int len);
void reverse(char A[],int len)
{
	for (int i = 0;i < len / 2;i++)
	{
		char temp = A[i];
		A[i] = A[len - i - 1];
		A[len - i - 1] = temp;
	}
}
int main()
{
	char A[10002] = { 0 }; //10^10000 => 10001자리
	char B[10002] = { 0 };
	char result[10002] = { 0 };
	int carry = 0;
	
	scanf("%s%s", A, B);
	reverse(A, strlen(A));
	reverse(B, strlen(B));

	int len = strlen(A) > strlen(B) ? strlen(A) : strlen(B); //길이가 더 긴 숫자를 선택

	for (int i = 0;i < len;i++)
	{
		int sum = A[i] + B[i] - '0' - '0' + carry; //숫자 변환을 위해 -'0' + 전의 자릿수의 carry 여부 확인
		while (sum < 0) sum += '0'; // null값과 계산할 경우 음수 값이므로 +'0'
		if (sum > 9) carry = 1; // 10이 넘어갈 경우 다음 자릿수 계산을 위해 carry 1
		else carry = 0;
		result[i] = sum % 10 + '0'; //일의 자릿수만 저장 후 다시 아스키 값 +'0'
	}
	if (carry == 1) result[len] = '1';
	/*{
		result[len] = 1;
		for (int i = len;i >= 0;i--)
			printf("%c", result[i] + '0');
	}
	else
	{
		for (int i = len-1;i >= 0;i--)
			printf("%c", result[i] + '0');
	}*/
	reverse(result, strlen(result));
	printf("%s", result);
	return 0;
}