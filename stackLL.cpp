//Stack Implementation as LinkedList:-
#include <iostream>
#include <stdlib.h>
#include<stack>
using namespace std;

class Node{
	public:
		int data;
		Node* next;
		
		Node(int d){
			data=d;
			next=NULL;
		}
};

void push(Node* &head, int d,int &count){
	Node* temp = new Node(d);
		temp->next=head;
		head=temp;
//		cout << "element pushed" << endl;
	cout << "element pushed" << endl;
	count++;
}



int pop(Node* &head,int &count){
	Node* temp=head;
	if(count<0){
		cout << "stack underflow"<<endl;
		return -1;	
	}
	else{
		int a= head->data;
		count--;
		head=head->next;
		delete(temp);
		return a;
	}
}

int peek(Node* &head){
	Node* temp = head;
	while(temp!=NULL){
		return temp->data;
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
	Node* n = new Node(10);
	Node* head=n;
	Node* tail=n;
	
	int d1,d2,d3;
	int count=-1;
	cout << "enter value to be pushed" << endl;
	cin >> d1;
	push(head,d1,count);
	cout << endl;
	
	cout << "enter value to be pushed" << endl;
	cin >> d2;
	push(head,d2,count);
	cout <<endl;
	
	cout << "enter value to be pushed" << endl;
	cin >> d3;	
	push(head,d3,count);
	cout << endl;
	
	cout << "poped element is " << pop(head,count) << endl;
	cout << "top element is " << peek(head) << endl;
	printll(head);
	
	return 0;
}
