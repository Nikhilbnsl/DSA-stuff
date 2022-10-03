#include <iostream>
using namespace std;


class Node{
	public:
		int data;
		Node* next;
		
		Node(){}
		
		Node(int val){
			data=val;
			next=NULL;
		}
};

void insertAthead(Node* &head, int val){
	Node* temp=new Node(val);
	temp->next=head;
	head=temp;
}

void deletell(Node* &head,int position){

	Node * temp =head;
	int count=1;
	
	if(position==1){
		head=head->next;
		delete temp;
	}

	
	while(count<position -1){
		temp=temp->next;
		count++;
	}
	temp->next=temp->next->next;
	
	
	
}

void printll(Node* &head){
	Node* temp =head;
	while(temp!=NULL){
		cout << temp->data << " ";
		temp=temp->next;
	}
	cout << endl;
}


int main(){
	Node* n= new Node(10);
	int d1,d2,d3,position;
	cout << "enter the elements to be entered." << endl;
	cin >> d1;
	cin >> d2;
	cin >> d3;
	Node* head =n;
	Node* tail=n;
	insertAthead(head, d1);
	insertAthead(head, d2);
	insertAthead(head, d3);
	cout << "values inserted";
	printll(head);
	cout << "enter position to be deleted." << endl;
	cin >> position;
	 deletell(head, position);
		printll(head);
		
	return 0;
}
