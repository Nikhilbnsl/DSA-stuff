#include <iostream>
#include <stdlib.h>
#include<stack>
using namespace std;

//Two Stack in a single array:-
class Stack{
	public:
	int size;
	int top1,top2;
	int* arr;
	
	Stack(int size){
		this->size=size;
		arr=new int[size];
		top1=-1;
		top2=size;
	}
	
	void push1(int e){
		if(top2-top1>1){
			top1++;
			arr[top1]=e;
//			cout << "pushed successfully"<< endl;
		}
		else{
			cout << "stack overflow" << endl;
		}
	}
	
	void push2(int e){
		if(top2-top1>1){
			top2--;
			arr[top2]=e;
//			cout << "pushed successfully"<< endl;
		}
		else{
			cout << "stack overflow" << endl;
		}
	}
	
	int peek1(){
		if(top1>=0){
			return arr[top1];
		}
		else{
			cout << "Stack is empty" << endl;
			return -1;
		}
	}
	
	int peek2(){
		if(top2<=size){
			return arr[top2];
		}
		else{
			cout << "Stack is empty" << endl;
			return -1;
		}
	}
	
	void pop1(){
		if(top1>=0){
			top1--;
		}
		else{
			cout << "Stack underflow" <<endl;
		}
	}
	
	void pop2(){
		if(top2>=0){
			top2++;
		}
		else{
			cout << "Stack underflow" <<endl;
		}
	}
};
int main(){
	Stack s(7);
	
	s.push1(8);
	s.push2(77);
	s.push1(81);
	s.push2(73);
	s.push1(83);
	s.push2(74);
	cout << "pushed successfully"<<endl;
	
	cout << s.peek1() << endl;
	cout << s.peek2() << endl;
	
	s.pop1();
	s.pop2();
	
	cout << s.peek1() << endl;
	cout << s.peek2() << endl;
	
	
	return 0;
}

