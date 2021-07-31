// C++ program to find the
// number of pairs in the
// array with the sum > 0

#include <bits/stdc++.h>
using namespace std;

// Function to find the number
// of pairs in the array with
// sum > 0
int findNumOfPair(int* a, int n)
{

	// Sorting the given array
	sort(a, a + n);

	// Variable to store the count of pairs
	int ans = 0;

	// Loop to iterate through the array
	for (int i = 0; i < n; ++i) {

		// Ignore if the value is negative
		if (a[i] <= 0)
			continue;

		// Finding the index using lower_bound
		int j = lower_bound(a, a + n, -a[i] + 1) - a;

		// Finding the number of pairs between
		// two indices i and j
		ans += i - j;
	}
	return ans;
}
int main()
{
	int a[] = { 3, -2, 1 };
	int b[] = {-1,-1,-1,0};
	int n = sizeof(a) / sizeof(a[0]);
	int m = sizeof(b) / sizeof(b[0]);

	int ans1 = findNumOfPair(a, n);
	int ans2 = findNumOfPair(b, m);
	cout<<"Number of paires for array{ 3, -2, 1 }: " << ans1 << endl;
	cout<<"Number of paires for array{-1,-1,-1,0}: " << ans2 << endl;

	return 0;
}

