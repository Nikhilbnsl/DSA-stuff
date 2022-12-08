#include <iostream>
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
//	
//	else{
//		while(d>p->data && p->next!=NULL){
//			p1=p;
//			p=p->next;
//		}
//		p1->next=temp;
//		temp->next=p;
//		
//		}
//    }
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
//     printll(head);
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

//Stack (LIFO)
//as array
//class Stack{
//	public:
//		int top;
//		int* arr;
//		int size;
//		
//		Stack(int size){
//			this->size=size;
//			arr=new int[size];
//			top=-1;
//		}
//		
//	void push(int element){
//		if(size-top>1){
//			top++;
//			arr[top]=element;
//		}
//		else{
//			cout << "stack overflow" << endl;
//		}
//	}
//	
//	void pop(){
//		if(top>=0){
//			top--;
//		}
//		else{
//			cout << "stack underflow" << endl;
//		}
//		
//	}
//	
//	int peek(){
//		if(top>=0){
//			return arr[top];
//		}
//		else{
//			cout << "stack underflow" << endl;
//			return -1;
//		}
//	}
//	
//};
//
//int main(){
//	Stack st(5);
//	
//	st.push(1);
//	st.push(2);
//	st.push(3);
//	st.push(4);
//	st.push(5);
//	st.push(6);
//	st.pop();
//	st.pop();
//	st.push(6);
//	cout << st.peek() << endl;
//	
//	return 0;
//}

//as linked list

//class Node{
//	public:
//		int data;
//		Node* next;
//		
//	Node(int data){
//		this->data=data;
//		next= NULL;
//	}
//	
//	void push(int data, Node* &head,int &count){
//		Node* temp= new Node(data);
//			temp->text=head;
//			temp=head;
//			count++;
//		}
//	
//	int pop(Node* &head,int &count){
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
//};
//
//int main(){
//	Node* n =new Node(8);
//	Node* head=n;
//	Node* tail=n;
//	int count = -1;
//	
//	
//	
//	return 0;
//}

// Queue:-
//insertion->rear
//deletion->front

//#include<queue>
//class Node{
//	public:
//		int data;
//		Node* next;
//		
//	Node(int data){
//		this->data=data;
//		next=NULL;
//	}
//	
//};
//
//void enqueue(int data,Node* &front, Node* &rear){
//	Node* temp = new Node(data);
// 
//        // If queue is empty, then
//        // new node is front and rear both
//        if (rear == NULL) {
//            front = rear = temp;
//            cout << "added1" << endl;
//            return;
//        }
// 
//        // Add the new node at
//        // the end of queue and change rear
//        rear->next = temp;
//        rear = temp;
//         cout << "added2" << endl;
//	}
//	
//	void dequeue(Node* &front, Node* &rear){
//		if(front==NULL){
//			cout << "queue is empty" << endl;
//		}
//		else{
//			front=front->next;
//			cout<<"else2"<<endl;
//		}
//		
//		if(front==NULL){
//			rear=NULL;
//		}
//	}
//	
//	void printqueue(Node* &front, Node* &rear){
//		Node* temp= front;
//		while(temp->next!=NULL){
//			cout<<temp->data << endl;
//			temp=temp->next;
//		}
//	}
//
//int main(){
//	Node* n = new Node(5);
//	Node* front=n;
//	Node* rear=n;
//	
//	dequeue(front,rear);
//	dequeue(front,rear);
//	enqueue(4,front,rear);
//	enqueue(6,front,rear);
//	dequeue(front,rear);
//	enqueue(90,front,rear);
//	dequeue(front,rear);
//	printqueue(front, rear);
//	
//	return 0;
//}


//circular Queue
//class Cqueue{
//	public:
//		int data;
//		int front;
//		int rear;
//		int size;
//		int* arr;
//		
//	Cqueue(int data,int size){
//		this->size=size;
//		int data=data;
//		front=rear=-1;
//		arr=new int[size];
//	}
//	
//	void enqueue(int data){
//		if((front==0 && rear=size-1)||(rear==(front-1)%(size-1)){
//			cout << "queue is full" << endl;
//		}
//		else if(front==-1){
//			front=rear=0;
//			arr[rear]=data;
//		}
//		else if(rear=size-1 && front!=0){
//			rear=0;
//			arr[rear]=data;
//		}
//		else{
//			rear++;
//			arr[rear]=data;
//		}
//	}
//	
//	void dequeue(){
//		if(front==-1){
//			cout << "queue is empty" << endl;
//			}
//		else if(front==rear){
//			front=rear=-1;
//		}
//		else if(front==size-1){
//			front=0;
//		}
//		else{
//			front++;
//		}
//	}
//};


//Double ended Queue (De-QUEUE)
// Deque implementation in C++

//
//
//class Deque {
//  int arr[MAX];
//  int front;
//  int rear;
//  int size;
//
//   public:
//  Deque(int size) {
//    front = -1;
//    rear = 0;
//    this->size = size;
//  }
//
//  void insertfront(int key);
//  void insertrear(int key);
//  void deletefront();
//  void deleterear();
//  bool isFull();
//  bool isEmpty();
//  int getFront();
//  int getRear();
//};
//
//bool Deque::isFull() {
//  return ((front == 0 && rear == size - 1) ||
//      front == rear + 1);
//}
//
//bool Deque::isEmpty() {
//  return (front == -1);
//}
//
//void Deque::insertfront(int key) {
//  if (isFull()) {
//    cout << "Overflow\n"
//       << endl;
//    return;
//  }
//
//  if (front == -1) {
//    front = 0;
//    rear = 0;
//  }
//
//  else if (front == 0)
//    front = size - 1;
//
//  else
//    front = front - 1;
//
//  arr[front] = key;
//}
//
//void Deque ::insertrear(int key) {
//  if (isFull()) {
//    cout << " Overflow\n " << endl;
//    return;
//  }
//
//  if (front == -1) {
//    front = 0;
//    rear = 0;
//  }
//
//  else if (rear == size - 1)
//    rear = 0;
//
//  else
//    rear = rear + 1;
//
//  arr[rear] = key;
//}
//
//void Deque ::deletefront() {
//  if (isEmpty()) {
//    cout << "Queue Underflow\n"
//       << endl;
//    return;
//  }
//
//  if (front == rear) {
//    front = -1;
//    rear = -1;
//  } else if (front == size - 1)
//    front = 0;
//
//  else
//    front = front + 1;
//}
//
//void Deque::deleterear() {
//  if (isEmpty()) {
//    cout << " Underflow\n"
//       << endl;
//    return;
//  }
//
//  if (front == rear) {
//    front = -1;
//    rear = -1;
//  } else if (rear == 0)
//    rear = size - 1;
//  else
//    rear = rear - 1;
//}
//
//int Deque::getFront() {
//  if (isEmpty()) {
//    cout << " Underflow\n"
//       << endl;
//    return -1;
//  }
//  return arr[front];
//}
//
//int Deque::getRear() {
//  if (isEmpty() || rear < 0) {
//    cout << " Underflow\n"
//       << endl;
//    return -1;
//  }
//  return arr[rear];
//}
//
//int main() {
//  Deque dq(4);
//
//  cout << "insert element at rear end \n";
//  dq.insertrear(5);
//  dq.insertrear(11);
//
//  cout << "rear element: "
//     << dq.getRear() << endl;
//
//  dq.deleterear();
//  cout << "after deletion of the rear element, the new rear element: " << dq.getRear() << endl;
//
//  cout << "insert element at front end \n";
//
//  dq.insertfront(8);
//
//  cout << "front element: " << dq.getFront() << endl;
//
//  dq.deletefront();
//
//  cout << "after deletion of front element new front element: " << dq.getFront() << endl;
//}

class Dqueue{
	public:
		int size;
		int* arr;
		int front;
		int rear;
		
	Dqueue(int size){
		this->size=size;
		front=-1;
		rear=-1;
		arr= new int[size];
	}
		
	void insertfront(int element){
		//full
		if((front==-1 && rear=size-1)||(rear=(front-1)%size-1)){
			cout << " queue is full" << endl;
		}
		//first element
		else if(front==-1){
			front=rear=0;
			arr[front]=element;
		}
		//cyclic nature
		else if(front==0){
			front=size-1;
			arr[front]=element;
		}
		//normal flow
		else{
			front--;
			arr[front]=element;
		}
	
	}
	
	void deletefront(){
		
		if(front==-1){
			cout << "queue is empty" << endl;
		}
		
		else if(front==rear){
			front=rear=-1;
		}
		
		else if(front=size-1){
			front=0;
		}
		else{
			front++;
		}
	}
		
	void insertrear(int element){
		//full
		if((front==0 && rear=size-1)||(rear=(front-1)%size-1)){
			cout << "queue is full" << endl;
		}
		
		//first element
		else if(front==-1){
			front=rear=0;
			arr[rear]=element;
		}
		
		//cyclic nature
		else if(rear==size-1 && front!=0){
			rear=0;
			arr[rear]=element;			
		}
		
		//normal flow
		else{
			rear++;
			arr[rear]=element;
		}
		
	
	}
	
	void deleterear(){
		if(front==-1){
			cout << "queue is empty" << endl;
		}
		
		else if(front==rear){
			front=rear=-1;
		}
		
		else if(rear==0){
			rear=size-1;
		}
		
		else{
			rear--;
		}
	}
	
};



int main(){
	
	
	return 0;
}


















