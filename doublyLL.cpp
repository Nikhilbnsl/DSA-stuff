
#include <iostream>
using namespace std;

//Doubly LinkedList

class Node{
	public:
		int data;
		Node* next;
		Node* prev;
		
		Node(int d){
			data=d;
			next=NULL;
			prev=NULL;
		}
	
};

void insertAthead(Node* &head,int d){
	Node* temp = new Node(d);
	temp->next=head;
	head->prev=temp;
	head=temp;
	
}

void insertAttail(Node* &tail, int d){
	Node* temp= new Node(d);
	tail->next=temp;
	temp->prev=tail;
	tail=temp;
}

void insertAtposition(Node* &head,int position, int p){
		Node* n1=new Node(p);
		Node* temp = head;
		int count=1;
	if(position==1){
			insertAthead(head,p);
	}
	
	else{

		while(count<position -1){
		temp=temp->next;
		count++;
	}
	n1->next=temp->next;
	temp->next->prev=n1;
	temp->next=n1;
	n1->prev=temp;
		
	}
}

void deletell(Node* &head, int position){
	Node* temp= head;
	if(position==1){
		head=head->next;

	}
	else{
		temp->next=temp->next->next;
	}
}

printll(Node* &head){
	Node* temp = head;
	while(temp!=NULL){
		cout << temp->data << " ";
		temp=temp->next;
	}
	cout << endl;
	
}

int main(){
	Node* n= new Node(73);
	int d,t,p,position;
	Node* head=n;
	Node* tail=n;
	cout << "enter the element to be added at head:";
	cin >>d;
	
	cout << "enter the element to be added at tail:";
	cin >>t;
	
	cout << "enter the element to be added anywhere:";
	cin >>p;
	
	cout << "enter the position:";
	cin >>position;
	
	insertAthead(head,d);
	insertAttail(tail,t);
	insertAtposition(head,position,p);
	cout <<"before deletion" << endl;
	printll(head);
	deletell(head,position);
	cout <<"after deletion" << endl;
	printll(head);
	
	
	return 0;
}
