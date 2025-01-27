#include <iostream>
using namespace std;

//create a node 
class Node{
    public:
    int data;
    Node* next;

    //by default value in the node
    Node(){
        this->data = 0;
        this->next = NULL;
    }
    //not by default  
    Node(int data){
        this->data = data;
        this->next = NULL;
    }
};


//I want to insert a node right at the head of linked list 
void insertAtHead(Node* &head,Node* &tail, int data){ 

    //check for empty LL
    if(head == NULL){
        Node* newNode = new Node(data);
        head = newNode;
        tail = newNode;
        return;
    }

    //step 1: create a new node 
    Node* newNode = new Node(data);

    //step 2: attached kardo new node ke next ko head ke sath 
    newNode -> next = head;

    //step 3:  head ko represent karlo starting node se (update head )
    head = newNode;

}

//i want to insert a node right at the end of Linked list 
void insertAtTail(Node* &head,Node* &tail, int data){

    //check for empty LL
    if(head == NULL){
        Node* newNode = new Node(data);
        head = newNode;
        tail = newNode;
        return;
    }
    //step1: create a new node 
    Node* newNode = new Node(data);

    //step2: connect with tail node 
    tail->next = newNode;

    //step3: update tail
    tail = newNode;

}

//print function to run the Linked list 
void print(Node* head){

    Node* temp = head;
    while(temp != NULL){
        cout<<temp->data<<" ";  //print data
        temp = temp->next;      //pointer point to next 
    }
}

//-------function of findlength
int findLength(Node* &head){
    int len = 0;
    Node* temp = head;
    while(temp != NULL){
        temp = temp->next;
        len++;
    }
    return len;
}

//InsertAtposition 
void insertAtPosition(int data, int position, Node* &head, Node* &tail){
// if LL is empty 
if(head == NULL){
        Node* newNode = new Node(data);
        head = newNode;
        tail = newNode;
        return;
    }
// LL is non empty
//insert at head 
if(position == 0){
    insertAtHead(head, tail, data);
    return;
}
//insert at tail but uske liye length pata hona chaheye 
int len = findLength(head);
if(position >= len){
    insertAtTail(head, tail, data);
    return;
}
// step1: find the position: prev and curr;
int i = 1;
Node* prev = head;
while(i<position){
    prev = prev -> next;    // prev find out 
    i++;
}
Node* curr = prev -> next;  // curr find out 

//step 2 : create a new node 
Node* newNode = new Node(data);

//step 3: 
newNode -> next = curr;

//step4:
prev -> next = newNode;
}


int main(){

// starting to create a LL
Node* head = NULL; 
Node* tail = NULL;

insertAtHead(head,tail,20);
insertAtHead(head,tail,30);
insertAtHead(head,tail,40);
insertAtHead(head,tail,50);
insertAtTail(head,tail,77);

print(head);
cout<<endl;
cout<<"head: " << head -> data << endl;
cout<<"tail: " << tail -> data << endl;

insertAtPosition(101, 6, head, tail);
cout<<endl; 
print(head);
cout<<endl; 
cout<<"head: " << head -> data << endl;
cout<<"tail: " << tail -> data << endl;

return 0;



}