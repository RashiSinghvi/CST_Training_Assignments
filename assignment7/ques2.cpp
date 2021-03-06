//Given an array A[] consisting of N integers from a range[1,N], the task is to calculate the count of
// array elements  that can be represented as the sum  of two or more consecutive elements.
#include <bits/stdc++.h>
using namespace std;
int main()
{
	int a[100],n,count[101],ans=0;
	cout<<"Enter the number of elements in array: ";
	cin>>n;
	cout<<"Enter the array:\n";
	for(int i=0;i<n;i++)
		cin>>a[i];
	memset(count,0,101); // to initialize each element of array with 0
	// Updating frequency of each element of array
	for(int i=0;i<n;i++)
		++count[a[i]];
	// finding the sum of all sub arrays (consecutive)
	for(int l=0;l<n;++l)
	{
		int sum=0;
		for(int r=l;r<n;r++)
		{
			sum+=a[r];
			if(l==r)
				continue;
			if(sum<=n)
			{
				ans+=count[sum];
				count[sum]=0;
			}
		}
	}
	cout<<"The number of elements are: "<<ans;
	return 0;
}
