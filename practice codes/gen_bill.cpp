#include<iostream>
using namespace std;
int main(){
	//create array of current denominations
	int notes[]={2000,500,200,100,50,20,10,5,2,1};
	//code to get total number of elements in the array
	int totalElement = sizeof(notes)/sizeof(notes[0]);
	int amount;
	//code to take input amount
	cout<<"Enter Amount: ";
	cin>>amount;
	// code to print bank slip like output
	for(int i=0;i<totalElement;i++){
		//get the total notes that can be used to made the denomination using current denomination
		int totalCurrentNotes = amount/notes[i];

		//print the details
		cout<<notes[i]<<" x "<<totalCurrentNotes<<" = "<<(totalCurrentNotes * notes[i])<<endl;
		
		//update the amount
		amount = amount - totalCurrentNotes*notes[i];
	}
	
}
