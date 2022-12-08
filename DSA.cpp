#include <iostream>
#include <stdlib.h>
#include<stack>
#include<queue>

using namespace std;
//*
//  insert element in the starting of the array.

//void disp(int arr[][], int r, int c){
//
//	for(int i=0; i<r; i++){
//		for(int j=0; j<c; j++){
//			cout <<  arr[i][j]; 			
//		} 
//	} 
//} */
//
//int indinsertion(int arr[], int size, int element,int capacity, int index){
//	if(size >= capacity){
//		return -1;
//	}	
//
//	for(int i =size-1; i>=index ; i--){
//		arr[i+1]=arr[i];
//	}
//	arr[index]=element;
//	return 1;
//}
//
//void display(int arr[], int n){
//	for(int i=0;i<n;i++){
//		cout << arr[i] << " ";
//	}
//}
//
//int main(){
//	/*
//	cout << "enter number of rows" << endl;
//	int r;
//	int c;
//	cin >> r;
//	cout << "enter number of columns" << endl;
//	cin >> c;
//	int arr[r][c];
////int* arr = new int[r*c];
//	cout << "enter the elements of array" << endl;
//	
//	for(int i=0; i<r; i++){
//		for(int j=0; j<c; j++){
//				cout << "enter the " << i+1 << " element ";
//				cin >> arr[i][j]; 			
//		} 
//	} 
////	int arr[][2]={1,2,4,6};
////	int n=3;
//	
//	cout << "array constructed!" << endl;
//	disp(arr, r,c);  */
//	
//
//	int arr[100]={7,8,12,88};
//	int size =4, element =45, index=3;
//	indinsertion(arr, size, element,100, index);
//	size++;
//	display(arr, size);
//	return 0;	
//	 
//}  
//// ---------------------------------------
//
////insert element at ith index s of the array.
//int insrt(int arr[], int i, int val, int s){
//	if(i>s){
//		return -1;
//			}
//			
//	else{
//		for(int j =(s-1); j>=i ; j--){
//		arr[j+1]=arr[j];
//	}
//	arr[i]=val;
//	return arr[i];
//	}
//	
//}
//
//
//int main(){
//	
//	cout << "enter the size of array" << endl;
//	int n;
//	cin >> n;
//	int arr[n];
//	int s= sizeof(arr);
//	int i,val,b;
//	cout << "enter the index" << endl;
//	cin >> i;
//	cout << "enter the value" << endl;
//	cin >> val;
//	for(int i=0; i<n; i++){
//		cout << "enter the " << i << " th element ";
//				cin >> arr[i]; 			
//		} 
//	
//	 b=insrt( arr, i, val,s);
//	 cout << b;
//	
//	return 0;
//}

//----------------------------------------------------------
// Binary Search 

//int binarysearch(int arr[], int s, int e){
//	int l,h,m;
//	l=0;
//	h=s-1;
//	m=(l+h)/2;
//	
//	while(l<=h){
//	if(arr[m]==e){
//		return m;
//	}
//	
//	else if(arr[m]<e){
//		l=m+1;
//	}
//	
//	else{
//		h=m-1;
//	}
//   
//}
//return -1;	
//		
//}
//
//int main(){
//	int arr[]={23,56,78,89,90,345,2345,67788};
//	int e=89;
//	int s= sizeof(arr)/sizeof(int);
//	int x=binarysearch(arr,s,e);
//	cout << "element found at index" << x;
//	
//	return 0;
//}
//-----------------------------------------------

// LINKED LIST

//class Node{
//	public:
//		int data;
//		Node* next;
//		
//		Node(){}
//		
//		Node(int val){
//			data=val;
//			next=NULL;
//		}
//};
//
//void insertAthead(Node* &head, int val){
//	Node* temp=new Node(val);
//	temp->next=head;
//	head=temp;
//}
//
//void deletell(Node* &head,int position){
//
//	Node * temp =head;
//	int count=1;
//	
//	if(position==1){
//		head=head->next;
//		delete temp;
//	}
//
//	
//	while(count<position -1){
//		temp=temp->next;
//		count++;
//	}
//	temp->next=temp->next->next;
//	
//	
//	
//}
//
//void printll(Node* &head){
//	Node* temp =head;
//	while(temp!=NULL){
//		cout << temp->data << " ";
//		temp=temp->next;
//	}
//	cout << endl;
//}
//
//
//int main(){
//	Node* n= new Node(10);
//	int d1,d2,d3,position;
//	cout << "enter the elements to be entered." << endl;
//	cin >> d1;
//	cin >> d2;
//	cin >> d3;
//	Node* head =n;
//	Node* tail=n;
//	insertAthead(head, d1);
//	insertAthead(head, d2);
//	insertAthead(head, d3);
//	cout << "values inserted";
//	printll(head);
//	cout << "enter position to be deleted." << endl;
//	cin >> position;
//	 deletell(head, position);
//		printll(head);
//		
//	return 0;
//}

//Doubly LinkedList

//class Node{
//	public:
//		int data;
//		Node* next;
//		Node* prev;
//		
//		Node(int d){
//			data=d;
//			next=NULL;
//			prev=NULL;
//		}
//	
//};
//
//void insertAthead(Node* &head,int d){
//	Node* temp = new Node(d);
//	temp->next=head;
//	head->prev=temp;
//	head=temp;
//	
//}
//
//void insertAttail(Node* &tail, int d){
//	Node* temp= new Node(d);
//	tail->next=temp;
//	temp->prev=tail;
//	tail=temp;
//}
//
//void insertAtposition(Node* &head,int position, int p){
//		Node* n1=new Node(p);
//		Node* temp = head;
//		int count=1;
//	if(position==1){
//			insertAthead(head,p);
//	}
//	
//	else{
//
//		while(count<position -1){
//		temp=temp->next;
//		count++;
//	}
//	n1->next=temp->next;
//	temp->next->prev=n1;
//	temp->next=n1;
//	n1->prev=temp;
//		
//	}
//}
//
//void deletell(Node* &head, int position){
//	Node* temp= head;
//	if(position==1){
//		head=head->next;
//
//	}
//	else{
//		temp->next=temp->next->next;
//	}
//}
//
//printll(Node* &head){
//	Node* temp = head;
//	while(temp!=NULL){
//		cout << temp->data << " ";
//		temp=temp->next;
//	}
//	cout << endl;
//	
//}
//
//int main(){
//	Node* n= new Node(73);
//	int d,t,p,position;
//	Node* head=n;
//	Node* tail=n;
//	cout << "enter the element to be added at head:";
//	cin >>d;
//	
//	cout << "enter the element to be added at tail:";
//	cin >>t;
//	
//	cout << "enter the element to be added anywhere:";
//	cin >>p;
//	
//	cout << "enter the position:";
//	cin >>position;
//	
//	insertAthead(head,d);
//	insertAttail(tail,t);
//	insertAtposition(head,position,p);
//	cout <<"before deletion" << endl;
//	printll(head);
//	deletell(head,position);
//	cout <<"after deletion" << endl;
//	printll(head);
//	
//	
//	return 0;
//}

//Circular LinkedList

//class Node{
//	public:
//		int data;
//		Node* next;
//		
//		Node(){}
//		
//		Node(int val){
//			data=val;
//			next=NULL;
//		}
//};
//
//void insertAthead(Node* &head, int val){
//	Node* temp=new Node(val);
//	temp->next=head;
//	head=temp;
//}
//
//void sortll(Node* head){
//	Node* temp=head;
//	
//	if(temp>=temp->next){
//		
//	}	
//}
//
//void printll(Node* &head){
//	Node* temp =head;
//	while(temp!=NULL){
//		cout << temp->data << " ";
//		temp=temp->next;
//	}
//	cout << endl;
//}
//
//int main(){
//	Node* n1= new Node(10);
//	Node* head= n1;
//	int d1,d2,d3,d4,d5;
//	cout << "enter values:" << endl;
//	cin >> d1;
//	cin >> d2;
//	cin >> d3;
//	cin >> d4;
//	cin >> d5;
//	
//	insertAthead(head, d1);
//	insertAthead(head, d2);
//	insertAthead(head, d3);
//	insertAthead(head, d4);
//	insertAthead(head, d5);
//	
//	printll(head);
//
//		
//	return 0;
//}
//Sorting linkedlist

//class Node{
//    public:  
//    int data;
//    Node* next;
//    
//    Node(){}
//    
//    Node(int d){
//        data=d;
//        next = NULL;
//    }
//};
//
//
//void sortll(Node* &head, int val){
//	Node* n1=new Node(val);
//	
//	if(head==NULL || head->data > val){
//		n1->next= head;
//		head=n1;
//	}
//	
//	else{
//	Node* p=head;
//	while(p->data <val && p->next!=NULL){
//		p=p->next;
//	}
//	n1->next=p->next;
//	p->next=n1;
//}
//
//}
//
//
//void printll(Node* head){
//    Node*temp=head;
//    while(temp->next!=NULL){
//        cout << temp->data<<" ";
//        temp=temp->next;
//    }
//    cout << endl;
//}
//
//int main()
//{
//    Node* n=new Node(45);
//    Node* head=n;
//    int d1,d2,d3,d4;
//
//    cout << "enter a value" << endl;
//    cin >> d1;
//    sortll(head,d1);    
//    
//    cout << "enter next value" << endl;
//    cin >> d2;
//    sortll(head,d2);
//    
//    cout << "enter next value" << endl;
//    cin >> d3;
//    sortll(head,d3);
//    
//    cout << "enter next value" << endl;
//    cin >> d4;
//    sortll(head,d4);
//    
//    printll(head);
//
//
//    return 0;
//}
//---------------------------------------------------------
//Stack Implementation as Array

//class Stack{
//	public:
//	int size;
//	int top;
//	int* arr;
//	
//	Stack(int size){
//		this->size=size;
//		arr=new int[size];
//		top=-1;
//	}
//	
//	void push(int element){
//		if(size-top>1){
//			top++;
//			arr[top]=element;
//			cout << "pushed successfully"<< endl;
//		}
//		else{
//			cout <<"Stack overflow" << endl;
//		}
//	}
//	
//	void pop(){
//		if(top>=0){
//			top--;
//		}
//		else{
//			cout <<"Stack underflow" << endl;
//		}
//	}
//	
//	int peek(){
//		if(top>=0){
//			return arr[top];
//		}
//		else{
//			cout <<"Stack is empty" << endl;
//			return -1;
//		}		
//	}
//	
//	bool isEmpty(){
//		if(top==-1){
//			cout <<"Stack is empty" << endl;
//			return true;			
//		}
//		else{
//			cout <<"Stack is not empty" << endl;
//			return false;
//		}
//	}
//	
//};
//
//int main(){
//	
//	//stack<int> s;
//	Stack st(5);
//	
//	st.push(13);
//	st.push(23);
//	st.push(33);
//	st.push(43);
//	st.push(53);
//
//	cout << st.peek() << endl;
//	st.pop();
//	cout << st.peek() << endl;
//	
//return 0;
//}

//Two Stack in a single array:-
//class Stack{
//	public:
//	int size;
//	int top1,top2;
//	int* arr;
//	
//	Stack(int size){
//		this->size=size;
//		arr=new int[size];
//		top1=-1;
//		top2=size;
//	}
//	
//	void push1(int e){
//		if(top2-top1>1){
//			top1++;
//			arr[top1]=e;
////			cout << "pushed successfully"<< endl;
//		}
//		else{
//			cout << "stack overflow" << endl;
//		}
//	}
//	
//	void push2(int e){
//		if(top2-top1>1){
//			top2--;
//			arr[top2]=e;
////			cout << "pushed successfully"<< endl;
//		}
//		else{
//			cout << "stack overflow" << endl;
//		}
//	}
//	
//	int peek1(){
//		if(top1>=0){
//			return arr[top1];
//		}
//		else{
//			cout << "Stack is empty" << endl;
//			return -1;
//		}
//	}
//	
//	int peek2(){
//		if(top2<=size){
//			return arr[top2];
//		}
//		else{
//			cout << "Stack is empty" << endl;
//			return -1;
//		}
//	}
//	
//	void pop1(){
//		if(top1>=0){
//			top1--;
//		}
//		else{
//			cout << "Stack underflow" <<endl;
//		}
//	}
//	
//	void pop2(){
//		if(top2>=0){
//			top2++;
//		}
//		else{
//			cout << "Stack underflow" <<endl;
//		}
//	}
//};
//int main(){
//	Stack s(7);
//	
//	s.push1(8);
//	s.push2(77);
//	s.push1(81);
//	s.push2(73);
//	s.push1(83);
//	s.push2(74);
//	cout << "pushed successfully"<<endl;
//	
//	cout << s.peek1() << endl;
//	cout << s.peek2() << endl;
//	
//	s.pop1();
//	s.pop2();
//	
//	cout << s.peek1() << endl;
//	cout << s.peek2() << endl;
//	
//	
//	return 0;
//}
//
//Stack Implementation as LinkedList:-

//class Node{
//	public:
//		int data;
//		Node* next;
//		
//		Node(int d){
//			data=d;
//			next=NULL;
//		}
//};
//
//void push(Node* &head, int d,int &count){
//	Node* temp = new Node(d);
//		temp->next=head;
//		head=temp;
////		cout << "element pushed" << endl;
//	cout << "element pushed" << endl;
//	count++;
//}
//
//
//
//int pop(Node* &head,int &count){
//	Node* temp=head;
//	if(count<0){
//		cout << "stack underflow"<<endl;
//		return -1;	
//	}
//	else{
//		int a= head->data;
//		count--;
//		head=head->next;
//		delete(temp);
//		return a;
//	}
//}
//
//int peek(Node* &head){
//	Node* temp = head;
//	while(temp!=NULL){
//		return temp->data;
//	}
//	
//}
//
//printll(Node* &head){
//	Node* temp = head;
//	while(temp!=NULL){
//		cout << temp->data << " ";
//		temp=temp->next;
//	}
//	cout << endl;
//	
//}
//
//int main(){
//	Node* n = new Node(10);
//	Node* head=n;
//	Node* tail=n;
//	
//	int d1,d2,d3;
//	int count=-1;
//	cout << "enter value to be pushed" << endl;
//	cin >> d1;
//	push(head,d1,count);
//	cout << endl;
//	
//	cout << "enter value to be pushed" << endl;
//	cin >> d2;
//	push(head,d2,count);
//	cout <<endl;
//	
//	cout << "enter value to be pushed" << endl;
//	cin >> d3;	
//	push(head,d3,count);
//	cout << endl;
//	
//	cout << "poped element is " << pop(head,count) << endl;
//	cout << "top element is " << peek(head) << endl;
//	printll(head);
//	
//	return 0;
//}


//Delete middle element in a Stack:-

//class Stack{
//	public:
//		int size;
//		int *arr;
//		int top;
//		
//		stack(int n){
//			size=n;
//		}
//};

//----------------Queue------------------

//class Queue{
//		public:
//		int* arr;
//		int front;
//		int rear;
//		int size;
//		
//
//	Queue(){
//		size=10;
//		arr=new int[size];	
//		front=0;
//		rear=0;	
//	}
//	
//	void enqueue(int d){
//		if(rear==size){
//			cout << "queue is full" << endl;
//		}
//		else{
//			arr[rear]=d;
//			rear++;
//		}
//	}
//	
//	int dequeue(){
//		if(front==rear){
//			cout << "queue is empty" << endl;
//			return -1;
//		}
//		else{
//			arr[front]=-1;
//			front++;
//			if(front==rear){
//				front=0;
//				rear=0;
//			}
//			return 0;
//		}
//	}
//	
//	void display(){
//		while(rear!=size){
//			cout << arr[rear] << endl;
//			rear++;
//		}
//	}
//	
//};
//
//int main(){
//	Queue q = new Queue();
////	Queue q(4);
//	q.enqueue(10);
//	q.enqueue(10);
//	q.enqueue(10);
//	q.enqueue(10);
//	q.dequeue();
//	q.enqueue(10);
//	
//	
//	return 0;
//}

//____TREE____

class Node{
	public:
		int data;
		Node* left;
		Node* right;
		
	Node(int d){
		this->data=d;
		this->left=NULL;
		this->right=NULL;
	}
};


Node* buildtree(Node* root){
	cout << "enter the data" << endl;
	int data;
	cin >> data;
	root = new Node(data);
	
//	while(data!=0){
	
	if(data==-1){
		return NULL;
	}
	
	
	cout << "enter data to insert in left of " << data << endl;
	root->left= buildtree(root->left);
	cout << "enter data to insert in right of " << data << endl;
	root->right= buildtree(root->right);
		return root;
//}
}

		
void LevelOrder(Node *root) {
	if(root == NULL) return;
	queue<Node*> Q;
	Q.push(root);
	Q.push(NULL);  
	//while there is at least one discovered node
	while(!Q.empty()) {
		Node* temp = Q.front();
		Q.pop(); // removing the element at front
		
		
		cout<<temp->data<<" ";
		if(temp->left != NULL) Q.push(temp->left);
		if(temp->right != NULL) Q.push(temp->right);
	
		
	}
}

int main(){
	Node* root=NULL;
	cout << "enter -1 for NULL and 0 to get out of the tree" << endl;
	//1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
	
	root=buildtree(root);
	//level order traversal
	cout << "printing level order traversal" << endl;
	LevelOrder(root);
	
	return 0;
}


//--------------------------------------------------------------------------

//struct Node {
//	char data;
//	Node *left;
//	Node *right;
//};
//
//// Function to print Nodes in a binary tree in Level order
//void LevelOrder(Node *root) {
//	if(root == NULL) return;
//	queue<Node*> Q;
//	Q.push(root);  
//	//while there is at least one discovered node
//	while(!Q.empty()) {
//		Node* current = Q.front();
//		Q.pop(); // removing the element at front
//		cout<<current->data<<" ";
//		if(current->left != NULL) Q.push(current->left);
//		if(current->right != NULL) Q.push(current->right);
//	}
//}
//// Function to Insert Node in a Binary Search Tree
//Node* Insert(Node *root,char data) {
//	if(root == NULL) {
//		root = new Node();
//		root->data = data;
//		root->left = root->right = NULL;
//	}
//	else if(data <= root->data) root->left = Insert(root->left,data);
//	else root->right = Insert(root->right,data);
//	return root;
//}
//
//int main() {
//	/*Code To Test the logic
//	  Creating an example tree
//	            M       
//			   / \
//			  B   Q
//			 / \   \
//			A   C   Z
//    */
//	Node* root = NULL;
//	root = Insert(root,'M'); root = Insert(root,'B');
//	root = Insert(root,'Q'); root = Insert(root,'Z'); 
//	root = Insert(root,'A'); root = Insert(root,'C');
//	//Print Nodes in Level Order. 
//	LevelOrder(root);
//}


//class Node{
//	public:
//		int data;
//		Node* left;
//		Node* right;
//		
//	Node(int d){
//		this->data=d;
//		this->left=NULL;
//		this->right=NULL;
//	}
//};
//
//int main(){
//	Node* root = NULL;
//	
//	return 0;
//}



