// C++ implementation to print the
// Difference Between sum of degrees
// of odd degree nodes and even
// degree nodes.
#include <bits/stdc++.h>
using namespace std;

// Function to print the difference
// Between sum of degrees of odd
// degree nodes and even degree nodes.
int OddEvenDegree(int N, int M,
					int edges[][2])
{
	// To store Adjacency List of
	// a Graph
	vector<int> Adj[N + 1];
	
	int EvenSum = 0;
	int OddSum = 0;

	// Make Adjacency List
	for (int i = 0 ; i < M ; i++) {
		int x = edges[i][0];
		int y = edges[i][1];

		Adj[x].push_back(y);
		Adj[y].push_back(x);
	}

	// Traverse each vertex
	for (int i = 1; i <= N; i++) {

		// Find size of Adjacency List
		int x = Adj[i].size();

		// If length of Adj[i] is
		// an odd number, add
		// length in OddSum
		if (x % 2 != 0)
		{
			OddSum += x;
		}
		else
		{
			// If length of Adj[i] is
			// an even number, add
			// length in EvenSum
			EvenSum += x;
		}
			
	}
	
	return abs(OddSum - EvenSum);
}

// Driver code
int main()
{
	// Vertices and Edges
	int N = 4, M = 6;

	// Edges
	int edges[M][2] = { { 1, 2 }, { 1, 3 }, { 1, 4 },
					{ 2, 3 }, { 2, 4 }, { 3, 4 } };

	// Function Call
	cout<< OddEvenDegree(N, M, edges);

	return 0;
}

