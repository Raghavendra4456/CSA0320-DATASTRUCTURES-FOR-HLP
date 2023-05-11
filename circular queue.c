#include<stdio.h>
#include<stdlib.h>
#define MAX 6
int q[10],front=0,rear=-1;
int main()
{
	int ch;
	void insert();
	void delet();
	void display();
	printf("circular queue operations");
	printf("1.insert/n2.delete/n3.display/n4.exit/n");
	while(1)
	{
		printf("enter the choice:");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1: insert();
			break;
			case 2: delet();
			break;
			case 3: display();
			break;
			case 4: exit(0);
			default:printf("invalid option/n");
		}
	}
}
void insert()
{
	int x;
	if((front==0&&rear==MAX-1)||(front>0&&rear==front-1))
	printf("queue is overflow/n");
	else
	{
		printf("insert element:");
		scanf("%d",&x);
		if(rear==MAX-1&&front>0)
		{
			rear=0;
			q[rear]=x;
		}
		else
		{
			if((front==0&&rear==-1)||(rear!=front-1))
			q[++rear]=x;
		}
	}
}
void delet()
{
	int a;
	if((front==0)&&(rear==-1))
	{
		printf("queue is underflow/n");
		exit(0);
	}
	if(front==rear)
	{
		a=q[front];
		rear=-1;
		front=0;
	}
	else
	if(front==MAX-1)
	{
		a=q[front];
		front=0;
	}
	else a=q[front++];
	printf("deleted element is:%d/n",a);
	}
	void display()
	{
		int i,j;
		if(front==0&&rear==-1)
		{
			printf("queue is underflow/n");
			exit(0);
		}
	if(front>rear)
	{
		for(i=0;i<=rear;i++)
		printf("/t%d",q[i]);
		for(j=front;j<=MAX-1;j++)
		printf("/n/t%d",q[j]);
		printf("/nrear is at %d/n",q[rear]);
		printf("/nfront is at %d/n",q[front]);
	}
	else
	{
		for(i=front;i<=rear;i++)
		{
			printf("/t%d",q[i]);
		}
		printf("/nrear is at %d/n",q[rear]);
		printf("/nfront is at %d/n",q[front]);
	}
	printf("/n");
}
