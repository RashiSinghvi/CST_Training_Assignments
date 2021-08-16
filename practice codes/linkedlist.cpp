/*
	WAP to implement the linked list
*/
#include<iostream>
using namespace std;
typedef struct Node{
	int data;
	struct Node *next;
}Node;

//create a head pointer that points to nothing now, will point ot first node
Node *head = NULL;

//function to count number of elements in the Linked List
int count(){
	int noOfNodes = 0;
	Node *temp = head;
	while(temp != NULL){
		noOfNodes++;
		temp = temp->next;
	}
	return noOfNodes;
}

//function to add the node at the start
void addAtBeginning(int data){
	//create a new node with given data
	Node *new_node = new Node;
	new_node->data = data;
	new_node->next = head;
	head = new_node;
}

//function to add the node at the end 
void append(int data){
	//check if the list is empty
	if(head == NULL){
		//the list is empty
		addAtBeginning(data);
		return;
	}
	
	//create a new node with given data
	Node *new_node = new Node;
	new_node->data = data;
	new_node->next = NULL;
	
	//reach to the last node is the list
	Node *temp = head;
	while(temp->next != NULL){
		temp = temp->next;
	}
	
	//temp is referring to the last node
	temp->next = new_node;
}

//function to add the node at the specified position
void addAtMiddle(int data, int pos){
	//say pos = 1 means add at the start
	//say pos = count + 1 means add at the end
	
	//check if the pos is valid 
	if(pos < 1 || pos >  count() + 1){
		cout<<"Invalid position";
		return;
	}
	if(pos == 1){
		addAtBeginning(data);
	}else if(pos == count() + 1){
		append(data);
	}else{
		//add node at the middle
		Node *temp = head;
		int i = 1;
		while(i < (pos - 1)){
			temp = temp->next;
			i++;
		}
		
		Node *tempNextNode = temp->next;
		
		//create a new node with given data		
		Node *new_node = new Node;
		new_node->data = data;
		new_node->next = tempNextNode;
		
		temp->next = new_node;
	}
}

void display(){
	if(head == NULL){
		cout<<"List is empty";
		return;
	}
	
	Node *temp = head;
	while(temp != NULL){
		cout<<temp->data<<" ";
		temp = temp->next;
	}
	cout<<endl;
}

void deleteNode(int data){
	if(head == NULL){
		cout<<"List is empty"<<endl;
		return;
	}
	Node *temp = head;	//temp refer to the node to be deleted
	Node *prevToTemp = head;
	
	//search the node to be deleted
	while(temp->data != data && temp != NULL){
		prevToTemp = temp;
		temp = temp->next;
	}
	//check of the element is not found
	if(temp == NULL){
		cout<<"Element not found"<<endl;
		return;
	}
	//the node to ve deleted is the first node
	if(temp == head){
		head = head->next;
		temp->next = NULL;
		delete temp;
	}else{
		//node to be deletes is middle node or last node
		prevToTemp->next = temp->next;
		delete temp;
	}
}

int main(){
	int choice;
	do{
		cout<<"1. Add node at the start"<<endl;
		cout<<"2. Add node at the middle (i.e. specified position)"<<endl;
		cout<<"3. Add node at the end"<<endl;
		cout<<"4. Display elements of list"<<endl;
		cout<<"5. Delete element from the list"<<endl;
		cout<<"0. Exit"<<endl;
		cout<<"Enter choice ";
		cin>>choice;
		
		int data, pos;
		switch(choice){
			case 0:
				cout<<"Bye bye"<<endl;
				break;
			case 1:
				cout<<"Enter element ";
				cin>>data;
				addAtBeginning(data);
				break;
			case 2:
				cout<<"Enter element and position";
				cin>>data>>pos;
				addAtMiddle(data,pos);
				break;
			case 3:
				cout<<"Enter element ";
				cin>>data;
				append(data);
				break;
			case 4:
				display();
				break;
			case 5:
				cout<<"Enter element ";
				cin>>data;
				deleteNode(data);
				break;
			default:
				cout<<"invalid selection, try again"<<endl;
		}		
	}while(choice != 0);
	
	return 0;
}

