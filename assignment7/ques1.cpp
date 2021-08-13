//check if the sum of a subarray within a given range  is a perfact square or not.
#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	int a[50];int range[2],n,sum=0;
	cout<<"Enter the size of the array: ";
	cin>>n;
	cout<<"Enter the array:\n";
	for(int i=0;i<n;i++)
		cin>>a[i];
	cout<<"Enter the range to be checked for perfect square\n";
	cout<<"Lower Bound: ";
	cin>>range[0];
	cout<<"Upper bound: ";
	cin>>range[1];
	for(int i = range[0];i<=range[1];i++)
		sum+=a[i];
	long long root = sqrt(sum);
	if(root*root == sum)
		cout<<root;
	else
		cout<<"-1";
	return 0;
}
