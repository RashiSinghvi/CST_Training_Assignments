#include<stdio.h>
#include<stdlib.h>
#define size 5
struct stack
{
	int top;
	int arr[size];
}s;
void menu();
void push()
{
	int n;
	char a;
	do
	{
		if(s.top>=size-1)
		{
		printf("\n Overflow");
		menu();
	    }
		else
		{
			printf("\n Enter element in stack: ");
			scanf("%d",&n);
			s.top++;
			s.arr[s.top]=n;
		}
		printf("\n Do you want to enter more element in stack<y/n>: ");
		scanf("%s",&a);
	}while(a=='y');
}
void display()
{
	int i;
	printf("\n Current stack is:\n");
	printf("%d<---",s.arr[s.top]);
	for(i=s.top-1;i>=0;i--)
	{
		printf("\n %d",s.arr[i]);
	}
}
int pop(){
	int ret;
	printf("\n After poping:-");
	if(s.top==-1)
	{
		printf("\n Underflow");
		getch();
		return -1;
	}
	else
	{
		ret=s.arr[s.top];
		s.top--;
		return ret;
	}
	display();
}
void menu()
{
	int d;
	int e;
	while(1)
	{
		printf("\n\t\t WELCOME TO STACK DATA STRUCTURES");
		printf("\n\t\t 1)PUSH THE ELEMENT INTO STACK");
		printf("\n\t\t 2)POP THE ELEMENT INTO STACK");
		printf("\n\t\t 3) DISPLAY THE STACK ELEMENTS");
		printf("\n\t\t 4) Exit");
		printf("\n Enter your choice: ");
		scanf("%d",&d);
		switch(d)
		{
			case 1: push(); break;
			case 2: e=pop();
			         printf("\n pop element from stack is %d",e);
			         break;
		    case 3: display(); break;
		    case 4: exit(0); break;
		    default: printf("\n Enter valid option!!!");
		}
	}
}
int main()
{
	s.top=-1;
	menu();
	return 0;
}
