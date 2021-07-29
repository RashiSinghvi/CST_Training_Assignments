//Rashi Singhvi
#include<iostream>
using namespace std;
int main(){
	int arr[3];
	cout<<"Enter 1st number: "<<endl;
	cin>>arr[0];
	cout<<"Enter 2nd number: "<<endl;
	cin>>arr[1];
	cout<<"Enter 3rd number: "<<endl;
	cin>>arr[2];
	for(int i=0;i<3;i++){
		for(int j=i+1;j<3;j++){
			if(arr[i]<arr[j]){
				int n_temp=arr[i];
				arr[i]=arr[j];
				arr[j]= n_temp;
			}
		}
	}
	for(int i=0;i<3;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	return 0;
}
