//Rashi Singhvi
//ques1
#include<iostream>
using namespace std;
int main()
{
	int k,n,arr[50],small,large,pos,temp,sum=0;
	cout<<"Enter value of K: "<<endl;
	cin>>k;
	cout<<"Enter range of array: "<<endl;
	cin>>n;
	cout<<"Enter array: "<<endl;
	for(int i=0;i<n;i++)
		cin>>arr[i];
	for(int i=0;i<n;i++)
	{
		large=arr[i];
		for(int j=i+1;j<n;j++)
		{
			if(arr[j]>=large)
			{
				large = arr[j];
				pos = j;
			}
		}
		if(k==0)
			break;
		else
		{
			sum+=large;
			arr[pos]=arr[pos]-1;
			k--;
		}
	}
	cout<<"The sum is: "<<sum;
	return 0;
}
