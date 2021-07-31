// CPP program to find the largest non-perfect
// cube number among n numbers
//rashi singhvi
#include <bits/stdc++.h>
using namespace std;

bool checkPerfectcube(int n)
{
	// takes the sqrt of the number
	int d = cbrt(n);

	// checks if it is a perfect
	// cube number
	if (d * d * d == n)
		return true;

	return false;
}

// Function to find the largest non perfect
// cube number in the array
int largestNonPerfectcubeNumber(int a[], int n)
{
	// stores the maximum of all
	// perfect cube numbers
	int maxi = -1;

	// Traverse all elements in the array
	for (int i = 0; i < n; i++) {

		// store the maximum if current
		// element is a non perfect cube
		if (!checkPerfectcube(a[i]))
			maxi = max(a[i], maxi);
	}

	return maxi;
}


int main()
{
	int a[] = { 16, 8, 25, 2, 3, 10 };
	int b[] = { 36, 64, 10, 16, 29, 25 };
	int n = sizeof(a) / sizeof(a[0]);

	cout <<"largest non-perfect cube of array { 16, 8, 25, 2, 3, 10 }: "<< largestNonPerfectcubeNumber(a, n)<<endl;
	cout <<"largest non-perfect cube of array { 36, 64, 10, 16, 29, 25 }: "<< largestNonPerfectcubeNumber(b, n);

	return 0;
}

