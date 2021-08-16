/*
	WAP to implement pattern matching using the z-array
*/
#include<iostream>
#include<string.h>
using namespace std;

void getZArray(char concat[], int Zarr[]);

void search(char text[], char pattern[]){
	int length = strlen(pattern);
	char *concat = new char[strlen(text) + strlen(pattern) + 2];
	//code to make make patter P$T
	strcpy(concat, strcat(strcat(pattern,"$"),text));
	//get the length of P$T
	int l = strlen(concat);
	//create an Z array
	int Z[l];
	getZArray(concat, Z);

	cout<<endl;
	for(int i = 0; i < l; i++){
		if(Z[i] == length){
			cout<<"Pattern found at index "<<(i - length - 1)<<endl; 
		}
	}
}

/*
	This will construct the Z-array for the given String
*/
void getZArray(char concat[], int Zarr[]){
	int n = strlen(concat);
	int L = 0, R = 0, k;
	
	for(int i = 1; i < n; i++){
		if(i > R){
			//if i > R nothing matches so continue using the naive way
			L = R = i;
			
			while(R < n && concat[R-L] == concat[R]){
				R++;
			}
			Zarr[i] = R - L;
			R--;
		}else{
			k = i - L;
			
			if(Zarr[k] < R - i + 1)
				Zarr[i] = Zarr[k];
			else{
				L = i;
				while(R < n && concat[R - L] == concat[R]){
					R++;
				}
				Zarr[i] = R- L;
				R--;
			}
		}
	}
}

int main(){
	char text[] = "ABABC";
	char pattern[] = "AB";
	search(text, pattern);
	return 0;
}

