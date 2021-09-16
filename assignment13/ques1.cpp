//rashi singhvi
//ques 1 max from array in k range and print sum retrieve
// C++ implementation of above approach
#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll getSum(int arr[], int K, int n)
{
	ll sum = 0;
	priority_queue<ll> maxHeap;
	for (ll i = 0; i < n; i++) {

		// put all array elements
		// in a max heap
		maxHeap.push(arr[i]);
	}

	while (K--) {

		// Get the current maximum element
		ll currentMax = maxHeap.top();

		// Add it to the sum
		sum += currentMax;

		// Remove the current max from the heap
		maxHeap.pop();

		// Add the current max back to the
		// heap after decrementing it by 1
		maxHeap.push(currentMax - 1);
	}
	return sum;
}

// driver code
int main()
{
	int arr[] = { 2, 3, 5, 4 }, K = 3;
	int n = sizeof(arr) / sizeof(arr[0]);
	cout <<"Sum: "<< getSum(arr, K, n) << endl;
}


