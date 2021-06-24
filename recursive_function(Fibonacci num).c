#include<stdio.h>
//baekjoon 10870
int FIBO(int n)
{
    if(n==0) return 0;
    if(n==1) return 1;
    return FIBO(n-1)+FIBO(n-2);
}
int main()
{
    int n;
    scanf("%d",&n);
    n=FIBO(n);
    printf("%d",n);
}