#include<stdio.h>
#define MAXITEMS 5

typedef struct{
	int top;
	int items[MAXITEMS];
}stack;

void push(stack *,int);
int pop(stack*);
int isempty(stack*);

main ()
{
	int n;
	stack s;
	s.top=-1;
	 	
	push(&s,1);
	push(&s,2);
	push(&s,3);
	push(&s,4);
	push(&s,5);
	//push(&s,5);

	
	
	printf("%d\n",pop(&s));
	printf("%d\n",pop(&s));
	printf("%d\n",pop(&s));
	printf("%d\n",pop(&s));
	printf("%d\n",pop(&s));
	//printf("%d\n",pop(&s));
	//printf("%d\n",pop(&s));

	
}

void push (stack *s,int n)
{
	if((s->top>=MAXITEMS-1))
	{
		printf("Stack Overflow!");	
		exit(1);
	}
	else 
	{
    	s->items[++(s->top)]=n; 
    }
}


int pop(stack*s)
{
	if((s->top==-1))
	{
		printf("Stack Underflow !");
		exit(1);
	}
	else
	{
		return(s->items[(s->top)--]);
	}

}

