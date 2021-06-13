#include<stdio.h>

struct stack
{
	int buffer[10]; 
	int num;
};
void save(struct stack *s1, int data);
int retrieve(struct stack *s1, int *data);
int main()
{
	struct stack s ;
	int data,re;

	printf("숫자를 입력하시오.");
	
	s.num = 0;
	while (1)
	{	
		scanf("%d", &data);
		if (data < 0)break;
		if (data > 0)
			save(&s, data);
		if(data==0)
		{
			re = retrieve(&s, &data);
			if (re== 0)
				printf("데이터가 없습니다 ");
			if(re ==1)
				printf("%d ", data);
		}
		}
	return 0;
}
void save(struct stack *s1, int data)
{	
	s1->buffer[s1->num++] = data;
}
int retrieve(struct stack *s1, int *data)
{
	int n=s1->num;
	if (n == 0)return 0;
	*data = s1->buffer[n - 1];
	s1->buffer[n - 1] = s1->buffer[n];
	s1->num -= 1;
	return 1;
}