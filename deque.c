#include<stdio.h>
#include<string.h>
#define MAX_SIZE 100000

typedef int Element;
Element data[MAX_SIZE];
int front;
int rear;

void init_deque(){front=rear=0;}
int empty(){return front==rear;}
int full(){return (rear+1)%MAX_SIZE==front;}
int size(){return (rear-front+MAX_SIZE)%MAX_SIZE;}
void push_front(Element x)
{
    if(full())
        return;
    data[front]=x;
    front=(front-1+MAX_SIZE)%MAX_SIZE;
}
void push_back(Element x)
{
    if(full())
        return;
    rear=(rear+1)%MAX_SIZE;
    data[rear]=x;
}
Element pop_front()
{
    if(empty())
        return -1;
    front=(front+1)%MAX_SIZE;
    return data[front];
    
}
Element pop_rear()
{
    Element ret;
    if(empty())
        return -1;
    ret=data[rear];
    rear=(rear-1+MAX_SIZE)%MAX_SIZE;
    return ret;
}
Element get_front()
{
    if(empty())
        return -1;
    return data[(front+1)%MAX_SIZE];
}
Element get_rear()
{
    if(empty())
        return -1;
    return data[rear];
}
int main()
{
    int K;
    scanf("%d",&K);
    for(int i=0;i<K;i++)
    {
        char str[11];
        scanf("%s",str);
        if(!strcmp(str,"push_front")||!strcmp(str,"push_back"))
        {
            int x;
            scanf("%d",&x);
            if(!strcmp(str,"push_front"))
                push_front(x);
            else
                push_back(x);
        }
        else if(!strcmp(str,"pop_front"))
            printf("%d\n",pop_front());
        else if(!strcmp(str,"pop_back"))
            printf("%d\n",pop_rear());
        else if(!strcmp(str,"size"))
            printf("%d\n",size());
        else if(!strcmp(str,"empty"))
            printf("%d\n",empty());
        else if(!strcmp(str,"front"))
            printf("%d\n",get_front());
        else if(!strcmp(str,"back"))
            printf("%d\n",get_rear());
    }
    return 0;
}