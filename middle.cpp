#include <iostream>

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

void insertll(Node* &top, int d, int &k){
    Node* n= new Node(d);
    top->next=n;
    top=n;
    k++;
    
    // cout << "element entered" << endl;
}

// int printll(Node* &top){
//     while(top->next!=NULL){
//         cout << top->data <<endl;
//             }
//             cout << endl;
// }

int dltelem(Node* &top,int k){
    int c=0;
    Node* p=head;
    while(c<k){
        
    }
    k--;
}

int main()
{
    Node* top;
    int k=0;
    insertll(top, 23,k);
    insertll(top, 24,k);
    insertll(top, 25,k);
    insertll(top, 26,k);
    insertll(top, 27,k);
    insertll(top, 28,k);
    cout <<"size of linked list is"<< k <<endl;
    
    if(k%2==0){
       cout << "poped element is"<< dltelem(top, k) << endl;
    }
    
    else{
        cout << "poped element is"<< dltelem(top, (k/2)+1) << endl;
    }

    return 0;
}
