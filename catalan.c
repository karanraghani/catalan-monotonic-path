#include<stdio.h>
int x,y;
int stack[49][2];
int top=-1;
void push(int x,int y)
{
	stack[++top][0]=x;
	stack[top][1]=y;
}
void pop()
{
	x=stack[top][0];
	y=stack[top--][1];
}
void main()
{	
	int path,m;
	stack[++top][0]=999;
	stack[top][1]=999;
	path=0;
	x=y=0;
	x++;
	printf("enter the value\n");
	scanf("%d",&m);
        push(999,999);
	do
	{
		while(x!=m&&y!=m)
		{
			if((y+1)<=x)
			push(x,(y+1));
			if ((x+1)<=m)
			push((x+1),y);
			pop();	
		}
		path++;
		pop();
	}while(x!=999&&y!=999);
	printf("no of monotonic paths are %d\n",path);
}
