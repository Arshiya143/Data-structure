#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define max 10

int front=-1;
int rear=-1;
int q[max];
void insert(int);
int del();
void display();

void main()
{
	int ch,x;
	clrscr();
	do
	{
		printf("\n 1.Insert element in queue");
		printf("\n 2.Delete element from queue");
		printf("\n 3.Display elements of queue");
		printf("\n 4.Exit");
		printf("\nEnter your choice:");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:printf("\nEnter Element:");
			       scanf("%d",&x);
			       insert(x);
			       break;
			case 2:x=del();
			       printf("\n%d Element is deleted..",x);
			       break;
			case 3:display();
			case 4:exit(0);
		}
	}while(ch!=4);
	getch();
}
void insert(int x)
{
	if(rear==max-1)
	{
		printf("\nQueue is full..");
	}
	else
	{
		if(front==-1)
		{
			front++;
			rear++;
			q[rear]=x;
		}
		else
		{
			rear++;
			q[rear]=x;
		}
	}
}
int del()
{
	int x;
	if(front==-1 && rear==-1)
	{
		printf("\nQueue is empty");
	}
	else
	{
		x=q[front];
		front++;
		if(front>rear)
		{
			front=-1;
			rear=-1;
		}
		
	}
	return x;
}
void display()
{
	int i;
	printf("\nElements are:");
	for(i=0;i<max;i++)
	{
		printf("\t%d",q[i]);
	}
}
