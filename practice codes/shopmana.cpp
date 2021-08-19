#include<iostream>
#include<stdio.h>
using namespace std;
const int m=50;
class shop
{
	public:
	int code[m];
	float price[m];
	int count;
	void cnt()
	{
		count=0;
	}
	void get_item();
	void displayall();
	void del();
	void sum();
};
void shop::get_item()
{
	cout<<"\n Enter Item Code: ";
	cin>>code[count];
	cout<<"\n Enter Price of item: ";
	cin>>price[count];
	count++;
}
void shop::displayall()
{
	cout.width(5);
	cout<<"Item Code";
	cout.width(8);
	cout<<"Cost";
	cout<<"\n";
     float sum=0.0;
	for(int i=0;i<count;i++)
	{
		cout.width(5);
		cout<<code[i];
		cout.width(10);
		cout<<price[i];
		sum=sum+price[i];
		cout<<"\n";
	}
	cout<<"\n";
	cout<<"\n Grand Total: "<<sum;
}
void shop::del()
{
	int a;
	cout<<"\n Enter Item code: ";
	cin>>a;
	for(int i=0;i<count;i++)
	{
		if(code[i]==a)
		price[i]=0;
	}
}
void shop::sum()
{
	float sum=0.0;
	for(int i=0;i<count;i++)
	sum=sum+price[i];
	cout<<"\n Grand Total: "<<sum<<endl;
}
void menu()
{
	shop s1;
	s1.cnt();
	int x;
	while(1)
	{
		cout<<"\n\t\tFUNCTIONS FOR YOU";
		cout<<"\n\t\t1)ADD AN ITEM";
		cout<<"\n\t\t2)DISPLAY ITEMS ";
		cout<<"\n\t\t3)DELETE AN ITEM";
		cout<<"\n\t\t4)DISPLAY TOTAL AMOUNT";
		cout<<"\n\t\t5)QUIT";
		cout<<"\n Enter your choice: ";
		cin>>x;
		switch(x)
		{
			case 1: s1.get_item(); break;
			case 2: s1.displayall(); break;
			case 3: s1.del(); break;
			case 4: s1.sum(); break;
			case 5: exit(0); 
			default: cout<<"\n Enter valid option!!!";
		}
	}
}
int main()
{
	menu();
	return 0;
}

