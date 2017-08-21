#include<stdio.h>
int queue[100];
int front=-1,rear=-1;
void insert(int n)
{
	front=0;
	if(front==0&&rear==sizeof(queue))
		printf("Queue is full");
	else
	{
		queue[rear]=n;
		rear=rear+1;
	}
}
int del()
{
	int x;
	if(front==-1)
		printf("Queue is empty");
	else
	{
		x=queue[front];
		front=front+1;
	}
	return(x);
}
void display()
{
	int i;
	if(front!=-1)
		for(i=front;i<=rear;i++)
			printf("%d\t",queue[i]);
}
void main()
{
	int c,x;
	do
	{
		printf("\nMENU\n1.Insert\n2.Delete\n3.Display\n4.exit\nenter your choice:");
		scanf("%d",&c);
		switch(c)
		{
			case 1:
				printf("Enter the number to be inserted:");
				scanf("%d",&x);
				insert(x);
				break;
			case 2:
				printf("Deleted element:%d",del());
				break;
			case 3:
				printf("Current status of queue:");
				display();
				break;
			default:
				break;
		}
	}while(c!=4);
}
