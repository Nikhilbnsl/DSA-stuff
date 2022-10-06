#include <iostream>

using namespace std;

class Node{
    public:  
    int data;
    Node* next;
    
    Node(){}
    
    Node(int d){
        data=d;
        next = NULL;
    }
};

void sortll(Node* head, int d){
    Node* n1 = new Node(d);
    Node* temp =head;
    Node* p1=NULL;
    
    if(d<=head->data){
        n1->next=head;
        head=n1;
    }
    
    else{
        while(d>temp->data && temp->next!=NULL){
            p1=temp;
            temp=temp->next;
        }
        p1->next=n1;
        n1->next=temp;
        
        if(d>temp->data){
            temp->next=n1;
        }
    }
    
}

void printll(Node* head){
    Node*temp=head;
    while(temp->next!=NULL){
        cout << temp->data;
        temp=temp->next;
    }
    cout << endl;
}

int main()
{
    Node* n=new Node(45);
    Node* head=n;
    int d1,d2,d3,d4;
    cout << "enter a value" << endl;
    cin >> d1;
    sortll(head,d1);
    
    cout << "enter next value" << endl;
    cin >> d2;
    sortll(head,d2);
    
    cout << "enter next value" << endl;
    cin >> d3;
    sortll(head,d3);
    
    cout << "enter next value" << endl;
    cin >> d4;
    sortll(head,d4);
    
    printll(head);


    return 0;
}
