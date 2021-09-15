#include<bits/stdc++.h>
using namespace std;
void decArray(int a[],int n)
{
	int sum=0,diff=0;
	priority_queue<int, vector<int>, greater<int> > vals;
	for(int i=0;i<n;i++)
	{
		if(!vals.empty() && vals.top()<a[i])
		{
			diff = a[i] - vals.top();
			sum+=diff;
			vals.pop();
		}
		vals.push(a[i]);
	}
	cout<<"Output: "<<sum;
}
int main()
{
	int n,a[50];
	cout<<"Enter range of array: "<<endl;
	cin>>n;
	cout<<"Enter array elements: "<<endl;
	for(int i=0;i<n;i++)
		cin>>a[i];
	decArray(a,n);
	return 0;
}
