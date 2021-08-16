#include<iostream>
using namespace std;

int find_min_index (float v[], int start, int end) {
	int i, mini;
	mini = start;
	for (i=start+1; i<end; i++){
		if (v[i] < v[mini])
			mini = i;
	}
	return mini;
}

void swap (float v[], int i, int j) {
	float t;
	t = v[i];
	v[i] = v[j];
	v[j] = t;
}

void selection_sort (float v[], int n) {
	int i;
	/*
	for i from 0 to n-1, swap v[i] with the minimum of the i'th to the n'th array elements
	*/
	for (i=0; i<n-1; i++){
		swap (v, i, find_min_index (v, i, n));
	}
}

void printArray(float arr[], int n){
	for(int i = 0; i < n; i++){
		cout<<arr[i]<<" ";
	}
	cout<<"\n";
}

int main(){
	float arr[] = {60,50,40,30,20,10};
	selection_sort(arr, sizeof(arr)/sizeof(arr[0]));
	printArray(arr,sizeof(arr)/sizeof(arr[0]));
	return 0;
}

