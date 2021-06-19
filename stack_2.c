#include<stdio.h>
#include<string.h>
#define MAX_SIZE 100000

typedef int Element;
Element data[MAX_SIZE];
int top=-1;

void init_stack(){top=-1;}
int empty(){return top==-1;}
int full(){return (top==MAX_SIZE-1);}
void push(int x)
{
    if(full())
        return -1;
    else
        data[++top]=x;
}
Element pop()
{
    if(empty())
        return -1;
    else
        return data[top--];
}
int main()
{
    init_stack();
    int i,K,num;
    int sum=0;
    scanf("%d\n",&K);
    for(i=0;i<K;i++)
    {
        scanf("%d\n",&num);
        if(num==0)pop();
        else push(num);
    }
    for(i=0;i<=top;i++)
        sum+=data[i];
    printf("%d",sum);
    return 0;
}