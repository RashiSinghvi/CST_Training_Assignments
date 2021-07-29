//Rashi Singhvi
#include<iostream>
using namespace std;
int main()
{
	int a,b,c,x;

    cout<<"Enter a three digit number n"<<endl;
    cin>>a;

    x=a%10;
    a=a/10;
    b=a%10;
    c=a/10;

    if (x==c)
    
       cout<<"It is PALINDROME. "<<endl;
    else
       cout<<"It is NOT PALINDROME. "<<endl;
    
    return 0;
}
