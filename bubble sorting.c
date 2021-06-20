#include<stdio.h>

int main()
{
    int array[1000];
    int i;
    int K;
    int temp;
    scanf("%d\n",&K);
    
    for(i=0;i<K;i++)
        scanf("%d\n",&array[i]);
    for(i=0;i<K;i++)
    {
        for(int j=0;j<K-1;j++)
        {
            if(array[j]>array[j+1])
            {
                temp=array[j];
                array[j]=array[j+1];
                array[j+1]=temp;
            }
        }
    }
    for(i=0;i<K;i++)
        printf("%d\n",array[i]);
    return 0;
}