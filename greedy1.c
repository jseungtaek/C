#include<stdio.h>
#include<stdlib.h>

int main()
{
    int K,N,i;
    int *c;
    int cnt=0;
    scanf("%d %d",&K,&N);
    c=(int*)malloc(sizeof(int)*K);
    for(i=0;i<K;i++)
        scanf("%d\n",&c[i]);
    i=K-1;
    while(N>0)
    {
       if(c[i]<=N)
       {
           N-=c[i];
           cnt++;
       }
       else i--;
    }
    printf("%d",cnt);
    free(c);
    return 0;
}