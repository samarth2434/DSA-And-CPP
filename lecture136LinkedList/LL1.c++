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

    //step 1: create a new node 
    Node* newNode = new Node(data);

    //step 2: attached kardo new node ke next ko head ke sath 
    newNode -> next = head;

    //step 3:  head ko represent karlo starting node se
    //first node insertion  
    if(head == NULL){  // insert karunga vo meri pehele node hogi 
    //first node add hogi
       tail = newNode;
    }
    head = newNode;

}

//i want to insert a node right at the end of Linked list 
void insertAtTail(Node* &head,Node* &tail, int data){
    //step1: create a new node 
    Node* newNode = new Node(data);

    //step2: connect with tail node 
    if(tail == NULL){
        tail = newNode;
        head = newNode;
    }
    else{
        tail->next = newNode;
    }

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

return 0;



}