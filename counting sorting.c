#include<stdio.h>
#define MAX 10001
//baekjoon 10989
int array[MAX];
int main()
{
    int N,num;
    for(int i=0;i<N;i++)
    {
        scanf("%d",&num);
        array[num]++;
    }
    for(int i=1;i<MAX;i++)
    {
        if(array[i]==0) continue;
        for(int j=0;j<array[i];j++)
            printf("%d\n",i);
    }
    return 0;
}