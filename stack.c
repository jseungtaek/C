#include<stdio.h>
#include<string.h>
#define MAX_SIZE 10000

typedef int Element;
Element data[MAX_SIZE];
int topindex=-1;

void init_stack(){topindex=-1;}
int size(){return topindex+1;}
int empty(){return (topindex==-1);}
int full(){return (topindex==MAX_SIZE-1);}
void push(int e)
{
    if(full())
        return -1;
    data[++topindex]=e;
}
Element pop()
{
    if(empty())
        return -1;
    return data[topindex--];
}
Element top()
{
    if(empty())
        return -1;
    return data[topindex];
}
int main()
{
    int i;
    init_stack();
    scanf("%d",&i);
    for(int j=0;j<i;j++)
    {
        char command[6];
        scanf("%s",command);
        if(!strcmp(command,"push"))
        {
            int x;
            scanf("%d\n",&x);
            push(x);
        }
        else if(!strcmp(command,"pop")) //pop일 경우 0(false 반환)
        {
            printf("%d\n",pop());
        }
        else if(!strcmp(command,"size"))
        {
            printf("%d\n",size());
        }
        else if(!strcmp(command,"empty"))
        {
            printf("%d\n",empty());
        }
        else if(!strcmp(command,"top"))
        {
            printf("%d\n",top());
        }
    }
    return 0;
}