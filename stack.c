#include<stdio.h>
int stack[100];
int top=-1;
void push(int n)
{
	if(top==sizeof(stack))
		printf("Stack is full");
	else
	{
		top=top+1;
		stack[top]=n;
	}
}
int pop()
{
	int x;
	if(top==-1)
		printf("Stack is empty");
	else
	{
		x=stack[top];
		top=top-1;;
	}
	return(x);
}
void display()
{
	int i;
	for(i=0;i<=top;i++)
		printf("%d\t",stack[i]);
}
void main()
{
	int c,y;
	do
	{
		printf("\nMENU\n1.push\n2.pop\n3.display\n4.exit\nEnter your choice:");
		scanf("%d",&c);
		switch(c)
		{
			case 1:
				printf("Enter the number to be pushed:");
				scanf("%d",&y);
				push(y);
				break;
			case 2:
				printf("popped element:%d",pop());
				break;
			case 3:
				display();
				break;
			default:
				break;
		}
	}while(c!=4);
}
