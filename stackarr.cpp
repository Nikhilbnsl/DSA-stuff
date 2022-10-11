#include <iostream>
#include <stdlib.h>
#include<stack>
using namespace std;

class Stack{
	public:
	int size;
	int top;
	int* arr;
	
	Stack(int size){
		this->size=size;
		arr=new int[size];
		top=-1;
	}
	
	void push(int element){
		if(size-top>1){
			top++;
			arr[top]=element;
			cout << "pushed successfully"<< endl;
		}
		else{
			cout <<"Stack overflow" << endl;
		}
	}
	
	void pop(){
		if(top>=0){
			top--;
		}
		else{
			cout <<"Stack underflow" << endl;
		}
	}
	
	int peek(){
		if(top>=0){
			return arr[top];
		}
		else{
			cout <<"Stack is empty" << endl;
			return -1;
		}		
	}
	
	bool isEmpty(){
		if(top==-1){
			cout <<"Stack is empty" << endl;
			return true;			
		}
		else{
			cout <<"Stack is not empty" << endl;
			return false;
		}
	}
	
};

int main(){
	
	//stack<int> s;
	Stack st(5);
	
	st.push(13);
	st.push(23);
	st.push(33);
	st.push(43);
	st.push(53);

	cout << st.peek() << endl;
	st.pop();
	cout << st.peek() << endl;
	
return 0;
}
